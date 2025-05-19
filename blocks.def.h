//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//to access the signals use  pkill -RTMIN+<n> dwmblocks where n is defined below
static const Block blocks[] = {
  /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/ /*use delim*/
  //{"VOL: ","pamixer --get-volume-human|tee >(notify-send -t 300 $(cat))", 0, 1 ,1},
  {"", "~/scripts/volume vol", 0, 1, 1},
  {"", "/usr/lib/i3blocks/cpu_usage/cpu_usage -d 0", 5, 0 ,0},
  {"", "cat /proc/cpuinfo|grep -i mhz|awk 'BEGIN {max = 0} {if ($4>max) max=$4} END {printf \"%dMhz\", max}'", 5, 0, 0},
  {"", "/usr/lib/i3blocks/temperature/temperature", 5, 0 ,1},
  {"", "iw wlan0 info | awk '/ssid/ {print $2}'", 5, 0, 0},
  {"", "/usr/lib/i3blocks/bandwidth/bandwidth -i ⬆ -o ⬇", 5, 0, 1},
  {"/:","BLOCK_INSTANCE=/ /usr/lib/i3blocks/disk/disk", 60, 0, 0},
  {"~/:","BLOCK_INSTANCE=/home /usr/lib/i3blocks/disk/disk", 60, 0, 1},
  {"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 1, 0, 1},
  {"", "BAT_NUMBER=0 HIB_LVL=2 HIB_WARN=4 ~/scripts/battery", 5, 0, 1},
  {"", "date '+%a %b %-d %-I:%M%p'", 1, 0, 1}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
