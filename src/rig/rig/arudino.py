import rclpy, time
import serial
from rclpy.node import Node
from std_msgs.msg import Int8, Float32
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy


class arduino(Node):
    def __init__(self):
        super().__init__('arduino')
        self.rx_buf = b''
        #declare in Bytes

    #------------------------------------------
        self.get_logger().info("Starting Arduino Node...")
        self.declare_parameter('serial', '/dev/ttyACM0')
        self.declare_parameter('baud_rate', 9600)
        self.declare_parameter('move_period', 1) #unit in second    

        serial_ad = self.get_parameter('serial').value
        baud_rate = self.get_parameter('baud_rate').value
        move_period = self.get_parameter('move_period').value
    #------------------------------------------
        self.serial = serial.Serial(port=serial_ad, baudrate=baud_rate)
        self.serial.reset_input_buffer()
        time.sleep(2)
        self.serial.write((f'S{move_period}S\n').encode())
        self.serial.write((f'L{1100}L\n').encode())
        time.sleep(2)
        self.serial.reset_output_buffer()
        self.get_logger().info("Connect to Arduino")
    #------------------------------------------
        done_qos = QoSProfile(depth=1,
                      history=HistoryPolicy.KEEP_LAST,
                      reliability=ReliabilityPolicy.RELIABLE)
        #we care about the newest number only
        self.motor_status = self.create_publisher(msg_type=Int8, topic='motor/stop', qos_profile=done_qos)

        # 0 means stop
        self.light_status = self.create_publisher(msg_type=Int8, topic='light/stop', qos_profile=done_qos)

        # 0 means ready on Arduino
        self.create_subscription(msg_type=Float32, topic='light/start', 
                                 callback=self.lumen_light, qos_profile=done_qos)
        # the number between 0-1
        self.create_subscription(msg_type=Int8, topic='motor/start', 
                                 callback=self.motor_move, qos_profile=done_qos)
        # 1 means move

        self.create_timer(0.05, self.report)
    def lumen_light(self, msg):
        b = max(0, msg.data)
        b = 1100 + 800 * b
        self.serial.write((f'L{int(b)}L\n').encode())

    def motor_move(self, msg):
        self.serial.write((f'M{1}M\n').encode())

    def report(self):
        num = self.serial.in_waiting
        if num == 0:
            return
        self.rx_buf += self.serial.read(num)
        while b'\n' in self.rx_buf:
            line, self.rx_buf = self.rx_buf.split(b'\n', 1)
            #cut the first signal from the text, split by \n
            text = line.decode().strip()
            if text.startswith('M'):
                self.motor_status.publish(Int8(data=1))      # <-- publish
                self.get_logger().info(f'motor done')
                self.serial.write('R'.encode())
            elif text.startswith('L'):
                self.light_status.publish(Int8(data=1))
                self.get_logger().info(f'light done')
                self.serial.write('R'.encode())
def main():
    rclpy.init()
    node = arduino()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()

if __name__ == '__main__':
    main()


        






