#!/bin/bash 
counter=0
echo "The numbers from 0-100 that are divisible by 3 or 5 are: " 
while [ $counter -le 100 ] 
do 
        if [ $(($counter % 5)) == 0 ] && [ $(($counter % 3)) == 0 ] 
        then 
                echo $counter 

        fi 
((counter++)) 
done 
