#!/bin/bash

username='yourname1'
if id "$username"; then
echo "user exist"
else
echo "add user"
sudo adduser yourname1
fi
groupname='familyname'

if grep -q "$groupname" /etc/group;then
echo "group exist"
else
sudo groupadd familyname
fi
sudo usermod -aG familyname yourname
echo "added"

