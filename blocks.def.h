/**
 * Scripts for the status bar: $HOME/.local/bin/statusbar
 *
 * Use the command below to reinstall and reload dwmblocks.
 * make clean install && { killall -q dwmblocks; setsid dwmblocks & }
 */

static const Block blocks[] = {
	/*Icon*/	/*Command*/	/*Update Interval*/	/*Update Signal*/
	{ "",		"sb-clock",	5,			0 },
};

static char delim[] = " | ";
static unsigned int delimLen = 5;
