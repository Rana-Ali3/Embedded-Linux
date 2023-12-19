#!/bin/bash


bashrc_file="$HOME/.bashrc"
if [ -f "$bashrc_file" ] ;
then
echo "export HELLO=\$HOSTNAME" >>"$bashrc_file"
echo "Environment variable HELLO added to $bashrc_file"
echo "LOCAL=$(whoami)">>"$bashrc_file"
echo "Environment variable LOCAL added to $bashrc_file"

gnome-terminal &

fi



