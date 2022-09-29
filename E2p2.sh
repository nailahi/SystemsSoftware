#!/bin/bash 
#!/bin/bash
echo -e "Enter Number : \c"
read n
for((i=2; i<=$n; i++))
do
	echo $i
  ans=$(( n%i ))
  if [ $ans -eq 0 ]

  then
    echo "$n is not a prime number."
else
	echo " $n is a prime number."
  fi
done
