#!/bin/bash

owners=`ps -ef | awk '{print $1}' | sort -u`
processes=`ps -ef | awk '{print $1}' | sort | uniq -c | awk '{print $1}'`
users=`who | awk '{print $1}' | sort -u`
i=0

#echo $owners
#echo $processes
#echo $users

for o in $owners; do
	for u in $users; do
		if [ $o == $u ]; then
			printf "%s " "$u"
			j=0
			for p in $processes; do
				if [ $j -eq $i ]; then
					printf "%d\n" "$p"
					break
				fi
				j=$((j+1))
			done
		fi
	done
	i=$((i+1))
done
