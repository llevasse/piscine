ifconfig -a | grep -w ether | cut -c8- |awk '{$1=$1};1'

