#!/bin/bash

content=`cat $1`
words=("" "" "")
i=0

for w in $content; do
	#echo "$w"
	#check if 3 words were selected from the file
	if [ $i -eq 3 ]; then
		break
	fi
	
	words[i]=$w
	echo ${words[i]}

	#increase the words index
	i=$((i+1))
done


#Second method to get the words
#We only interchange the 1st and the 3rd word to reverse the order
w1=`cat $1 | awk '{print $1}'`
w3=`cat $1 | awk '{print $3}'`

sed 's/'$w1'/A/g' "$1" | sed 's/'$w3'/C/g' > backup.txt
sed 's/A/'$w3'/g' "backup.txt" | sed 's/C/'$w1'/g' > "$1"

rm "backup.txt"
