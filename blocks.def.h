//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//to access the signals use  pkill -RTMIN+<n> dwmblocks where n is defined below
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/ /*use delim*/
	{"VOL: ","pamixer --get-volume-human", 0, 1 ,0},
	{"MIC: ","pamixer --source \"alsa_input.pci-0000_00_1f.3.analog-stereo\" --get-volume-human", 0, 2, 1},
	{"CPU: ","/usr/lib/i3blocks/cpu_usage/cpu_usage", 5, 0 ,0},
  {"", "cat /proc/cpuinfo|grep -i mhz|awk 'BEGIN {max = 0} {if ($4>max) max=$4} END {printf \"%dMhz\", max}'", 5, 0, 0},
	{"","SENSOR_CHIP=coretemp-isa-0000 /usr/lib/i3blocks/temperature/temperature", 5, 0 ,1},
	{"","/usr/lib/i3blocks/iface/iface", 30, 0, 0},
	{"","/usr/lib/i3blocks/bandwidth/bandwidth", 10, 0, 1},
	{"ROOT: ","BLOCK_INSTANCE=/ /usr/lib/i3blocks/disk/disk", 60, 0, 0},
	{"HDD: ","BLOCK_INSTANCE=/mnt/hdd /usr/lib/i3blocks/disk/disk", 30, 0, 0},
	{"HOME: ","BLOCK_INSTANCE=/home /usr/lib/i3blocks/disk/disk",	60,0, 1},
	{"MEM: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	5,		0, 1},
	{"", "date '+%a %d %b %Y %I:%M %p'", 10, 0, 1}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
