#!/bin/bash
upower -i $(upower -e | grep "BAT") | grep "percentage" | grep -o "[0-9]*%$"
