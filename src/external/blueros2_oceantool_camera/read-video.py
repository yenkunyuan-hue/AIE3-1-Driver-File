import rclpy
import os
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import datetime
OUT_DIR = '/home/yen/optical_data'
save_rate = 60

class camera_saver(Node):
    def __init__(self):
        super().__init__("camera_saver")       
        os.makedirs(f'{OUT_DIR}/image', exist_ok=True)
        self.address = '{OUT_DIR}/image'
        self.create_subscription(
            Image, #declare the data type
            'oceantool/image_raw', #node name
            self.callback, #action if read
            10 #qos, the max amount of message it stores each time
        )
        self.bridge = CvBridge()

    def callback(self, msg):
        self.count+=1
        if self.count >= save_rate: 
            frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            ads = f'{self.address}/{datetime.now().strftime("%Y-%m-%d  %H:%M:%S")}.jpg'
            cv2.write(ads, frame)
            self.count = 0 
rclpy.init()
node_1 = camera_saver()
if __name__ == "__main__":
    try:
        rclpy.spin(node_1)
    except KeyboardInterrupt:
        pass
    node_1.destroy_node()
    rclpy.shutdown()
