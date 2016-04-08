#!/bin/bash

#get toghether the connected users and their number of connections
who=`who | awk '{print $1}' | sort | uniq -c`
#get the connected users
users=`echo $who |  awk '{print $2}'`
#get the nr of active connection for each user
connec=`echo $who | awk '{print $1}'`
#loop through the arguments
while [ $# -gt 0 ]; do
	u1=$1 #input user
	c1=$2 #input nr. of connections
	i=0   #use this to keep track of the current nr. of connec.
	for u2 in $users; do
		#check if the input user really exists
		if [ "$u1" == "$u2" ]; then
			j=$i
			for c2 in $connec; do
				#check if we have the corresponding user's number 
				#of connections  in the #"connec" list 
				if [ $j -eq 0 ]; then
					#check if c1 verifies
					if [ $c1 == $c2 ]; then
						echo $u1
					fi	
				fi	
				j=$((j - 1))
			done
		fi
		#increase the place in the nr. of connec list
		i=$((i + 1))
	done
	shift 2
done
