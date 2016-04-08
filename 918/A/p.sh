#!/bin/bash

#Get files
files=`find $1 -type f`
#Get number of files
fnr=`printf "%s" " $files" |  wc -l`
#Print number of files
printf "Files: %d \n" "$fnr"

#Get subdirectories
subdir=`find -type d | tail -n +2`
#Get number of subdirectories
sdnr=`printf "%s\n" "$subdir" | wc -l`
#Print number of subdirectories
printf "Subdirs: %d\n" "$sdnr"

echo "---"

sum=0
current=0
for f in $files; do
	#Gurrent file number of lines
	current=`cat $f | wc -l`
	#Add to the total number of lines
	sum=$((sum + current))
	printf "%s: %d lines\n" "`basename $f`" "$current"
done

echo "---"
printf "Total: %d\n" "$sum"
