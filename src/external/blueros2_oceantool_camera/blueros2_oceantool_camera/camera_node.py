import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import threading

class camera_node(Node):
    def __init__(self):
        super().__init__("camera_node")
        self.get_logger().info("Starting OceanTool Camera Node...")

        self.declare_parameter('rtsp_url', 'rtsp://admin:Aau12345@192.168.200.65:554/Streaming/Channels/101')
        self.declare_parameter('camera_topic', 'oceantool/image_raw')
        self.declare_parameter('frame', 'camera_link')
        self.declare_parameter('fps', 30)

        self.rtsp_url = self.get_parameter('rtsp_url').value
        self.camera_topic = self.get_parameter('camera_topic').value
        self.frame = self.get_parameter('frame').value
        self.fps = self.get_parameter('fps').value

        self.bridge = CvBridge()
        self.publisher_ = self.create_publisher(Image, self.camera_topic, 10)
        self.timer = self.create_timer(1.0 / self.fps, self.timer_callback)

        self.cap = None
        self.frame_lock = threading.Lock()
        self.latest_frame = None
        self.running = True

        # Run capture in background thread so RTSP blocking doesn't stall ROS
        self.capture_thread = threading.Thread(target=self.capture_loop, daemon=True)
        self.capture_thread.start()

        self.get_logger().info("Connecting to RTSP stream: %s" % self.rtsp_url)

    def capture_loop(self):
        while self.running:
            if self.cap is None or not self.cap.isOpened():
                self.get_logger().info("Opening RTSP stream...")
                self.cap = cv2.VideoCapture(self.rtsp_url, cv2.CAP_FFMPEG)
                if not self.cap.isOpened():
                    self.get_logger().warn("Failed to open stream, retrying in 3s...")
                    import time
                    time.sleep(3)
                    continue
                else:
                    self.get_logger().info("RTSP stream opened successfully.")

            ret, frame = self.cap.read()
            if ret:
                with self.frame_lock:
                    self.latest_frame = frame
            else:
                self.get_logger().warn("Lost RTSP stream, reconnecting...")
                self.cap.release()
                self.cap = None

    def timer_callback(self):
        with self.frame_lock:
            if self.latest_frame is None:
                return
            frame = self.latest_frame.copy()

        try:
            from datetime import datetime
            import cv2 as cv

            # Scale screenshot pixel locations to actual 1920x1080 frame
            # Screenshot was 1731x1103rame, real f is 1920x1080
            # Camera OSD text region: x1=1336, y1=28, x2=1729, y2=62 (in screenshot coords)
            scale_x = 1920 / 1731
            scale_y = 1080 / 1103
            x1 = int(1336 * scale_x)  # ~1481
            y1 = int(28   * scale_y)  # ~27
            x2 = int(1729 * scale_x)  # ~1920
            y2 = int(70   * scale_y)  # ~61

            # Black out the camera's wrong timestamp
            cv.rectangle(frame, (x1, y1), (x2, y2), (0, 0, 0), -1)

            # Write correct timestamp in same region
            timestamp_str = datetime.now().strftime("%Y-%m-%d  %H:%M:%S")
            text_x = x1 + 6
            text_y = y2 - 8
            cv.putText(frame, timestamp_str, (text_x, text_y),
                       cv.FONT_HERSHEY_SIMPLEX, 1, (255, 255, 255), 2, cv.LINE_AA) #Font previously 0.65

            msg = self.bridge.cv2_to_imgmsg(frame, encoding="bgr8")
            msg.header.frame_id = self.frame
            msg.header.stamp = self.get_clock().now().to_msg()
            self.publisher_.publish(msg)
        except Exception as e:
            self.get_logger().warn("Failed to publish frame: %s" % str(e))

    def destroy_node(self):
        self.running = False
        if self.cap:
            self.cap.release()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = camera_node()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Shutting down camera node.")
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
