read number
counter=0
while [ $counter -le $number ] 
do 
        if [ $(($counter % 2)) != 0 ] 
        then 
                echo $counter 

        fi 
((counter++)) 
done 
