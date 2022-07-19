#!/bin/bash

echo "Input a: "
read a
echo "Input b: "
read b

echo "Input choice: 1.ADD 2.Sub 3.Div 4.Mul"
read c
case $c in 
    1) echo "Add 2 numbers";
       result=`expr $a + $b`;
       echo $result;;
    2) echo "Sub 2 numbers";
       result=`expr $a - $b`;
       echo $result;;
    3) echo "Div 2 numbers";
       result=`expr $a / $b`;
       echo $result;;
    4) echo "Mul 2 numbers";
       result=`expr $a \* $b`;
       echo $result;;
esac