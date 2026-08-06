#!/bin/bash

echo "Enter directory path:"
read dir

files=$(find "$dir" -type f | wc -l)
dirs=$(find "$dir" -type d | wc -l)

echo "Files : $files"
echo "Directories : $dirs"
