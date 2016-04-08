#!/bin/bash

results=`find *.c -type f`
contor=0

for f in $results; do
	if [ $contor -eq 10 ]; then
		break;
	fi
	lines=`cat $f | wc -l`
	if [ $lines -gt 500 ]; then
		echo $f
	fi
	contor=$((contor+1))
done
