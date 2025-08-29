import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/cheon/Documents/dyros/piper-mou/piper_ros/install/piper'
