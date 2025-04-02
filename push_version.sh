#!/bin/bash
if [ -z "$1" ] || [ -z "$2" ]; then
    echo "Error: Please provide a week (e.g., week2) and a commit message"
    echo "Example: ./push_version.sh week2 \"Added feature\""
    exit 1
fi
cd ~/Documents/Learning/C/cs50
MAJOR=$(grep "VERSION_MAJOR" $1/version.h | awk '{print $3}')
MINOR=$(grep "VERSION_MINOR" $1/version.h | awk '{print $3}')
git add .
git commit -m "$1 v$MAJOR.$MINOR - $2"
git push origin main
