#!/bin/bash
if [ -z "$1" ]; then
    echo "Error: Please provide a commit message"
    echo "Example: ./commit.sh \"Fixed typo\""
    exit 1
fi
cd ~/Documents/Learning/C/cs50
git add .
git commit -m "$1"
git push origin main
