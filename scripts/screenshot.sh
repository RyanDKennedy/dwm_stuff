#!/bin/bash

# get location
screenshot_location=$(echo -e "~/Pictures/" | dmenu -p "Screenshot Location: ")

# exit conditional
if [[ -z "$screenshot_location" ]]
then
    exit 0
fi

# get file extension
file_extension=$(echo $screenshot_location | grep -o "\..*$")

# default file extension
if [[ -z "$file_extension" ]]
then
    file_extension=".png"
fi

# take screenshot
scrot -s=capture -F "%Y-%m-%d_\$wx$$h$file_extension" -f -e "mv \$f $screenshot_location"
