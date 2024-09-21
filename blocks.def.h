//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//to access the signals use  pkill -RTMIN+<n> dwmblocks where n is defined below
static const Block blocks[] = {
  /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/ /*use delim*/
  {"", "~/scripts/volume vol", 0, 1, 0},
  {"", "~/scripts/mic vol", 0, 2, 1},
  {"", "/usr/lib/i3blocks/cpu_usage -d 0", 1, 0, 0},
  {"", "grep -i mhz /proc/cpuinfo|awk 'BEGIN {min = \"MAX\"} {if ($4<min) min=$4} END {printf \"%.1fGhz\", min/1000}'", 1, 0, 0},
  {"", "SENSOR_CHIP=coretemp-isa-0000 ~/scripts/temps", 1, 0, 1},
  {"", "~/scripts/nvidia-gpu-info", 1, 0, 1},
  {"", "/usr/lib/i3blocks/bandwidth -i ⬆ -o ⬇", 5, 0, 1},
  {"/:", "BLOCK_INSTANCE=/ /usr/lib/i3blocks/disk", 10, 0, 0},
  // {"HDD: ", "BLOCK_INSTANCE=/mnt/hdd /usr/lib/i3blocks/disk", 5, 0, 0},
  {"~/:", "BLOCK_INSTANCE=/home /usr/lib/i3blocks/disk", 10, 0, 1},
  {"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 1, 0, 1},
  {"", "date '+%a %b %-d %-I:%M%p'", 1, 0, 1}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
