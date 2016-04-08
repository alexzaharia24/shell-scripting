#!/bin/bash

# rm -fr

#find only the files
files=`find -type f`
for f in $files; do
	#get the last char
	last=${f: -1}
	if [ "$last" == "~" ]; then
		rm -rf $f
	fi	
done
