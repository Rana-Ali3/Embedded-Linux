#!/bin/bash

backup_directory="backups"
mkdir -p $backup_directory
for dir in "$@"; do
dir_name=$(basename "$dir")
time1=$(date +'%Y%m%d_%H%M%S')
dir1_archive="backup_${dir_name}_${time1}.tar.gz"

tar czf "${backup_directory}/${dir1_archive}" -C "$(dirname "$dir")" "$dir_name"

if [ "$?" -eq 0 ]; then
       
        echo "Backup of $dir_name created"
    else
        echo "Error: Backup of $dir_name failed."
    fi
done

