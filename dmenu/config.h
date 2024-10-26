/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

#include "../ry_config_header.h"

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
//	"monospace:size=12"
//	"MonaspiceKr Nerd Font Mono:size=12"
        RY_FONTS
};
static const char *prompt      = RY_DMENU_PROMPT;      /* -p  option; prompt to the left of input field */

//static const char ry_col_primary[]  = "#181A26";
//static const char ry_col_primary[]  = "#997733";
//static const char ry_col_secondary[]= "#00E5EE";
//static const char ry_col_secondary[]= "#AA5511";
//static const char ry_col_grey[]     = "#050505";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", ry_col_primary },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
