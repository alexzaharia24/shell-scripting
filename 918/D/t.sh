#!/bin/bash

#Declare arrays and string
sub=()
found=()
str=""

#Store the given words
#Initialize the array with times found
for s in $*; do
	sub+=($s)
	found+=(0)
done

#Read initial string

ok=0 #Use this to check if the words have 
     #been found 3 times each
while ! [ $ok -eq ${#found[@]} ]; do
	#Get input from the user	
	read -p "String: " str
	ok=0
	i=0 #Use this to get the corresponding
            #number of found for each word
	#Use an auxiliary file to store the string
	printf "%s\n" "$str" > tmp.txt
	#Loop through the words
	for s in ${sub[@]}; do
		#Get the number of times the word appears in the string
		count=`grep -ow $s tmp.txt | wc -l`
		#Increment number of times found
		found[$i]=$((found[$i] + count))
		i=$((i + 1))
	done
	echo "------"
	echo ${sub[@]}
	echo ${found[@]}
	
	#Increment ok with the number of words
	#that have been found at least 3 times
	for f in ${found[@]}; do
		if [ $f -eq 3 ]; then
			ok=$((ok + 1))
		fi
	done

done
