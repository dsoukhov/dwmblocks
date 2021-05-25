//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//to access the signals use  pkill -RTMIN+<n> dwmblocks where n is defined below
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/ /*use delim*/
	{"VOL: ","/usr/lib/i3blocks/volume/volume", 0, 1 ,0},
	{"MIC: ","/usr/lib/i3blocks/microphone/microphone", 0, 2, 1},
	{"CPU: ","/usr/lib/i3blocks/cpu_usage/cpu_usage", 10, 0 ,0},
	{"","SENSOR_CHIP=coretemp-isa-0000 /usr/lib/i3blocks/temperature/temperature", 10, 0 ,1},
	{"","/usr/lib/i3blocks/iface/iface", 30, 0, 0},
	{"","/usr/lib/i3blocks/bandwidth/bandwidth", 10, 0, 1},
	{"Root: ","BLOCK_INSTANCE=/ /usr/lib/i3blocks/disk/disk", 30, 0, 0},
	{"Home: ","BLOCK_INSTANCE=/home /usr/lib/i3blocks/disk/disk",	30,0, 1},
	{"Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	10,		0, 1},
	{"", "date '+%a %d %b %Y %r'", 1, 0, 1}
  //{"", "/home/daniel/.config/i3/rofi-calendar/rofi-calendar", 1,    0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
