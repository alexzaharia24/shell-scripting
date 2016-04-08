#!/bin/bash

files=`find *.log`
for f in $files; do
	cat $f | sort > backup.txt
	cat backup.txt > $f 
done
