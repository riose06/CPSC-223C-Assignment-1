#!/bin/bash

echo "Compile main.c"
gcc -c -Wall -m64 -no-pie -o main.o main.c -std=gnu11

echo "Link the object files"
gcc -m64 -no-pie -o main.out main.o -std=gnu11

#Make sure the executable has permission to execute
chmod u+x main.out

echo "Run the program Chemistry:"
./main.out

echo "The script file will terminate"
