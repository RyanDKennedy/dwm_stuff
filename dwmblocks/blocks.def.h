#include "../ry_config_header.h"

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"", "date '+%A - %B %d - %H:%M'",					5,		0},
#ifdef RY_IS_ON_LAPTOP
	{"Battery:", "/opt/dwm_stuff/scripts/battery_percentage.sh",            30,             0},
#undef
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
