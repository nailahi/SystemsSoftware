#! /bin/bash

echo "enter a number:"
read number
echo "The square values of $number are "
COUNTER=0


while [ $COUNTER -le $number ]; do
echo `"$COUNTER"\*"$COUNTER"`
        let COUNTER+=1
done

