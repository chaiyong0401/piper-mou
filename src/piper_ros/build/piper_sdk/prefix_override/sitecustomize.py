import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/dyros/mcy_ws/piper-mou/src/piper_ros/install/piper_sdk'
