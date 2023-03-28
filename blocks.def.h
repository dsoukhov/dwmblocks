//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//to access the signals use  pkill -RTMIN+<n> dwmblocks where n is defined below
static const Block blocks[] = {
  /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/ /*use delim*/
  {"VOL: ", "pamixer --get-volume-human", 0, 1, 0},
  {"MIC: ", "~/scripts/mic vol", 0, 2, 1},
  {"CPU: ", "/usr/lib/i3blocks/cpu_usage", 1, 0, 0},
  {"", "grep -i mhz /proc/cpuinfo|awk 'BEGIN {min = \"MAX\"} {if ($4<min) min=$4} END {printf \"%dMhz\", min}'", 1, 0, 0},
  {"", "SENSOR_CHIP=coretemp-isa-0000 /usr/lib/i3blocks/temperature", 1, 0, 1},
  {"GPU: ", "nvidia-smi -q | grep -i -C4 Utilization | awk 'NR==7{printf \"%d%\", $3}'", 1, 0, 0},
  {"", "nvidia-smi -q | grep -i Memory | awk 'NR==14{printf \"%dMhz\", $3}'", 1, 0, 0},
  {"", "nvidia-smi -q | grep -i \"GPU Current Temp\" | awk '{printf \"%d°C\", $5}'", 1, 0, 1},
  {"", "/usr/lib/i3blocks/bandwidth", 5, 0, 1},
  {"ROOT: ", "BLOCK_INSTANCE=/ /usr/lib/i3blocks/disk", 10, 0, 0},
  {"HDD: ", "BLOCK_INSTANCE=/mnt/hdd /usr/lib/i3blocks/disk", 5, 0, 0},
  {"HOME: ", "BLOCK_INSTANCE=/home /usr/lib/i3blocks/disk", 10, 0, 1},
  {"MEM: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 1, 0, 1},
  {"", "date '+%a %d %b %Y %I:%M %p'", 1, 0, 1}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
