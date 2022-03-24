#!/bin/bash
FILE=get_password.c
if [ -f "$FILE" ]; then
    gcc get_password.c -o get_password
    rm -f get_password.c
fi
gcc part1.c -o part1 && ./part1
status=$?
if (($status == 0)) 
then 
    gcc -g part2.c -o part2 && ./part2
    status2=$?
    if (($status2 == 0))
    then
        clang part3.c -o part3 && ./part3
    else
        exit 1
    fi
else
    exit 1
fi