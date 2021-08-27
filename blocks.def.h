//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//to access the signals use  pkill -RTMIN+<n> dwmblocks where n is defined below
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/ /*use delim*/
	{"VOL: ","pamixer --get-volume-human", 0, 1 ,1},
	{"CPU: ","/usr/lib/i3blocks/cpu_usage/cpu_usage", 1, 0 ,0},
        {"", "cat /proc/cpuinfo|grep -i mhz|awk 'BEGIN {max = 0} {if ($4>max) max=$4} END {printf \"%dMhz\", max}'", 1, 0, 0},
	{"", "/usr/lib/i3blocks/temperature/temperature", 5, 0 ,1},
	{"", "iwctl station wlan0 show | grep Connected | awk -F ' ' '{print $3}'", 5, 0, 0},
	{"", "iwctl station wlan0 show | grep AverageRSSI | awk -F ' ' '{print $2$3}'", 5, 0, 0},
	{"","/usr/lib/i3blocks/bandwidth/bandwidth", 5, 0, 1},
	//{"ROOT: ","BLOCK_INSTANCE=/ /usr/lib/i3blocks/disk/disk", 60, 0, 0},
	//{"HOME: ","BLOCK_INSTANCE=/home /usr/lib/i3blocks/disk/disk", 60, 0, 1},
	{"MEM: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 1, 0, 1},
	{"BAT0: ", "BAT_NUMBER=0 /usr/lib/i3blocks/battery/battery", 5, 0, 0},
	{"BAT1: ", "BAT_NUMBER=1 /usr/lib/i3blocks/battery/battery", 5, 0, 0},
	{"" , "/home/daniel/scripts/wattage", 5, 0, 1},
	{"", "date '+%a %d %b %Y %I:%M %p'", 10, 0, 1}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
