import rclpy, time
from rclpy.node import Node
from std_msgs.msg import Int8, Float32, String
import os, json
import numpy as np
from cv_bridge import CvBridge
import cv2
from collections import deque
from sensor_msgs_py import point_cloud2
from aanderaa_smart_sensor.msg import Turbidity, Conductivity, Density, SoundSpeed
from as7341_msgs.msg import SpectralReading, AS7341Reading         
from sensor_msgs.msg import Image, PointCloud2, Illuminance, Temperature
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
import cv2
from rosidl_runtime_py import message_to_ordereddict
import numpy as np


def draw_cloud_image(pts, path, max_range, height=800):
    margin = 20
    az = np.arctan2(np.abs(pts[:, 1]), pts[:, 2]) if len(pts) else np.array([np.radians(65)])
    half_fov = float(az.max())
    px_per_m = (height - 2 * margin) / max_range
    half_w = int(max_range * px_per_m * np.sin(half_fov)) + margin   # only as wide as the fan
    width = 2 * half_w
    cx, cy = half_w, height - margin

    canvas = np.zeros((height, width, 3), np.uint8)

    if len(pts):
        y, z, inten = pts[:, 1], pts[:, 2], pts[:, 3]
        sign = 1.0
        u = (cx + sign * y * px_per_m).astype(int)
        v = (cy - z * px_per_m).astype(int)
        ok = (u >= 0) & (u < width) & (v >= 0) & (v < height)
        gray = (np.clip(inten, 0.0, 1.0) * 255).astype(np.uint8)
        order = np.argsort(gray[ok])
        img = np.zeros((height, width), np.uint8)
        img[v[ok][order], u[ok][order]] = gray[ok][order]
        img = cv2.dilate(img, np.ones((3, 3), np.uint8))           # fill gaps between far beams
        canvas = cv2.applyColorMap(img, cv2.COLORMAP_INFERNO)

    # ---- keep only the fan, black outside ----
    mask = np.zeros((height, width), np.uint8)
    cv2.ellipse(mask, (cx, cy), (int(max_range * px_per_m),) * 2, -90,
                -np.degrees(half_fov), np.degrees(half_fov), 255, -1)
    canvas[mask == 0] = 0

    # ---- grid: range arcs + fan edges ----
    step = 0.5 if max_range <= 5 else (1.0 if max_range <= 10 else 5.0)
    for r in np.arange(step, max_range + 1e-6, step):
        rp = int(r * px_per_m)
        cv2.ellipse(canvas, (cx, cy), (rp, rp), -90, -np.degrees(half_fov), np.degrees(half_fov),
                    (90, 90, 90), 1)
        cv2.putText(canvas, f'{r:g} m', (cx + 4, cy - rp - 4),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.45, (170, 170, 170), 1)
    for a in (-half_fov, half_fov):
        end = (int(cx + max_range * px_per_m * np.sin(a)), int(cy - max_range * px_per_m * np.cos(a)))
        cv2.line(canvas, (cx, cy), end, (90, 90, 90), 1)
    cv2.imwrite(path, canvas)



class reader(Node):
    def __init__(self):
        super().__init__('reader')
        self.create_timer(10.0, self.store)
        done_qos = QoSProfile(depth=1,
                      history=HistoryPolicy.KEEP_LAST,
                      reliability=ReliabilityPolicy.RELIABLE)
        #------------------------------------------------------------
        self.declare_parameter('path', '/home/yen/dataset')
        self.declare_parameter('light_levels', [0.0, 0.3, 0.5, 0.7, 1.0])
        self.path = self.get_parameter('path').value
        self.light_level = self.get_parameter('light_levels').value
        self.time = self.get_clock().now().nanoseconds / 1e9
        #1 nano second = e-9 second
        #------------------------------------------------------------
        #name/cache of the folder/file
        self.counter = 1
        self.camera = deque(maxlen=10)
        self.sonar = deque(maxlen=10)
        env_topics = [
    ('lux',          Illuminance,     '/veml7700/illuminance'),
    ('spectral',     SpectralReading, '/as7341/spectral'),
    ('turbidity',    Turbidity,       '/aanderaa/turbidity/turbidity'),
    ('temperature',  Temperature,     '/aanderaa/turbidity/temperature'),
    ('conductivity', Conductivity,    '/aanderaa/conductivity/conductivity'),
    ('sound_speed',  SoundSpeed,      '/aanderaa/conductivity/sound_speed')]
        self.env_dict = {name:deque(maxlen=10) for name, _, _ in env_topics}
        #------------------------------------------------------------
        #motor-light monitor
        self.motor_status = False
        self.light_status = False
        self.idx = 0
        self.create_subscription(msg_type=Int8, topic='motor/stop', 
                                 callback=self.motor_monitor, qos_profile=done_qos)
        self.create_subscription(msg_type=Int8, topic='light/stop', 
                                 callback=self.light_monitor, qos_profile=done_qos)
        self.light = self.create_publisher(msg_type=Float32, 
                                           topic='light/start', qos_profile=done_qos)
        self.motor = self.create_publisher(msg_type=Int8, 
                                           topic='motor/start', qos_profile=done_qos)
        #------------------------------------------------------------
        #sonar - camera
        self.bridge = CvBridge()
        self.create_subscription(msg_type=PointCloud2, qos_profile= 10, callback=self.sonar_read, topic='sonar_cloud')
        self.create_subscription(msg_type=Image, qos_profile= 10, topic='oceantool/image_raw', callback=self.camera_read)

        #------------------------------------------------------------
        #env sensor
        for name, val_type, path in env_topics:
            self.create_subscription(msg_type=val_type, topic=path,qos_profile=10, callback=lambda msg, n = name:self.sensor_write(msg, n))
            #if I write self.sensor_write(msg, n), it won't use when ros2 recalls it, it runs directly
            #会直接被调用，但我们只是封装方法，所有用lambda
        

    def sensor_write(self, msg, name):
        if self.motor_status and self.light_status:
            self.env_dict[name].append((self.get_time(), msg))

    def name_assemble(self, t_cam, t_son):
        name = f'{self.counter:04d}'
        if os.path.exists(f'{self.path}/{name}'):
            pass
        else:
            os.mkdir(f'{self.path}/{name}')
        optical_name = os.path.join(f'{self.path}/{name}',f'optical_{name}_{t_cam}.png')
        sonar_name = os.path.join(f'{self.path}/{name}',f'sonar_{name}_{t_son}')
        env_name = os.path.join(f'{self.path}/{name}',f'env_{name}.json')
        self.counter += 1
        return optical_name, sonar_name, env_name

    def sonar_read(self, msg):
        npz = point_cloud2.read_points_numpy(msg, field_names=('x', 'y', 'z', 'intensity'))
        if self.motor_status and self.light_status:
            self.sonar.append([self.get_time(), npz])

    def camera_read(self, msg):
        img = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        if self.motor_status and self.light_status:
            self.camera.append([self.get_time(), img])

    def motor_monitor(self, msg):
        self.motor_status = True

    def light_monitor(self, msg):
        self.light_status = True

    def motor_move(self):
        self.motor.publish(msg=Int8(data=1))

    def light_on(self):
        val = self.light_level[self.idx]
        self.light.publish(msg=Float32(data=val))

    def get_time(self):
        delta_t = self.get_clock().now().nanoseconds / 1e9 - self.time
        return delta_t

    def store(self):
        if self.motor_status and self.light_status:    
            data = {}
            t_cam, cam_img = self.camera[-1]
            self.camera.clear()
            t_son, son_img = self.sonar[-1]
            self.sonar.clear()
            cam_path, sonar_path, json_path= self.name_assemble(t_cam, t_son)
            cv2.imwrite(cam_path, cam_img)
            np.savez_compressed(sonar_path, son_img)
            draw_cloud_image(pts=son_img, max_range=2, path=f'{sonar_path}.png')
            for key, value in self.env_dict.items():
                data[key] = value[-1] if value else None

            with open (json_path, 'w') as f:
                json.dump(data,f, indent=4, default=message_to_ordereddict)

            for key in self.env_dict:
                self.env_dict[key].clear()
            #clear up the dictionary

            if self.idx == 4:
                self.idx = 0
                self.light_on()
                self.motor_move()
                self.light_status = False
                self.motor_status = False
            else:
                self.idx += 1
                self.light_on()
                self.light_status = False
        else:
            self.get_logger().info('motor/light is working')

def main():
    rclpy.init()
    node = reader()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()

if __name__ == '__main__':
    main()
        


