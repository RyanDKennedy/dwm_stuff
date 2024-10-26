#!/usr/bin/bash

# moms house monitors
# xrandr --output DP-0 --primary
# xrandr --output DP-0 --mode 1920x1080 -r 240
# xrandr --output HDMI-0 --mode 1920x1080 -r 144

# dads house monitors
xrandr --output DP-0 --primary --mode 1920x1080 -r 240 --left-of HDMI-0
xrandr --output HDMI-0 --mode 1920x1080 -r 60

# laptop
# xrandr --output eDP --primary --mode 1920x1080 -r 60

xset s noblank
xset s off

$HOME/.fehbg &
picom -b --backend glx --vsync

dwmblocks &
exec dwm
