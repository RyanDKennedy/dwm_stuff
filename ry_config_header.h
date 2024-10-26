#pragma once

static const int ry_screen_amount = 2;
#define RY_EMACSCLIENT_PATH "/usr/bin/emacsclient"
#define RY_SCRIPTS_PATH "/home/kenne/scripts/"
// #define RY_IS_ON_LAPTOP

static const char ry_col_primary[]  = "#4B2EBF";
static const char ry_col_secondary[]= "#FFFFFF";
static const char ry_col_grey[]     = "#050505";

#define RY_DMENU_PROMPT ">"

#define RY_FONT_FAMILY "MonaspiceKr Nerd Font Mono"
#define RY_FONT(size) RY_FONT_FAMILY ":size=" #size
#define RY_FONTS RY_FONT(12)
#define RY_DMENUFONT RY_FONT(10)
