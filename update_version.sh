#!/bin/bash
if [ -z "$1" ]; then
    echo "Error: Please specify a week (e.g., week2)"
    echo "Example: ./update_version.sh week2"
    exit 1
fi
cd ~/Documents/Learning/C/cs50/$1
if [ -f version.h ]; then
    MAJOR=$(grep "VERSION_MAJOR" version.h | awk '{print $3}')
    MINOR=$(grep "VERSION_MINOR" version.h | awk '{print $3}')
else
    MAJOR=1
    MINOR=0
fi
echo "#ifndef VERSION_H" > version.h
echo "#define VERSION_H" >> version.h
echo "#define VERSION_MAJOR $MAJOR" >> version.h
echo "#define VERSION_MINOR $MINOR" >> version.h
echo "#endif" >> version.h
