import sys
if sys.prefix == '/Users/yangkunyuan/ros_ws/.pixi/envs/default':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/Users/yangkunyuan/rig_ws/install/rig'
