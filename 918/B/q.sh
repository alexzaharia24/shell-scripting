#!/bin/bash

N=$1
files=`find -name "*.o" -type f`
for f in $files; do
	if [ -r $f ]; then
		dim=`wc -c $f | awk '{print $1}'`
		if [ $dim -gt $N ]; then
			printf "%s\n" "$f"
		fi
	fi
done
#printf "%s\n" "$files"
