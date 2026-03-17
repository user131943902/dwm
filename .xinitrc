#!/bin/bash

xsetroot -solid black &
xsetroot -cursor_name left_ptr &

/usr/lib/polkit-gnome/polkit-gnome-authentication-agent-1 &
udiskie --no-tray &

xwallpaper --zoom ~/Images/wallpapers/chasers.jpg &
picom --config ~/.config/picom/picom.conf &

/usr/bin/st &

exec dwm
