//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/        /*Command*/		/*Update Interval*/	/*Update Signal*/
        {"Bat:",        "battery",              30,                     0},
        {"Load:",       "loadavg",              30,                     0},
        {"Mem:",        "memory",               30,                     0},
	{"",            "datetime",	        5,                      0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
