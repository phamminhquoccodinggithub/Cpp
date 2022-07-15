#!/bin/bash

#Matrix 3x3
for((i=0;i<3;i++))
do
    for((j=0;j<3;j++))
    do
        if(($i == $j))
        then
            echo -n "1 ";
        else
            echo -n "0 ";    
        fi        
    done
    echo ;
done
