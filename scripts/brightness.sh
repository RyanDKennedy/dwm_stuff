#!/bin/bash

screen_device="amdgpu_bl1"
current_brightness=$(brightnessctl g -d $screen_device)
max_brightness=$(brightnessctl -d $screen_device | grep "Max" | grep -o "[0-9]*$")
min_brightness=0

if [[ "$1" == "+" ]]
then
    new_brightness=$(($current_brightness + $2))
    if [[ $new_brightness -gt $max_brightness ]]; then new_brightness=$max_brightness; fi;
    brightnessctl s -d $screen_device $new_brightness
elif [[ "$1" == "-" ]]
then
    new_brightness=$(($current_brightness - $2))
    if [[ $new_brightness -lt $min_brightness ]]; then new_brightness=$min_brightness; fi;
    brightnessctl s -d $screen_device $new_brightness
elif [[ "$1" == "=" ]]
then
    brightnessctl s -d $screen_device $2
fi
