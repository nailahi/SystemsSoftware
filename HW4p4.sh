#!/bin/bash
         COUNTER=0
         while [  $COUNTER -le 10 ]; do
             echo The counter is $COUNTER
		sh ./HW4p1.sh
             let COUNTER=COUNTER+1 
         done
