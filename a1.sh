#!/bin/bash

echo "Remove unnecessary files"
rm -f main.o main.out

echo "Compile main.c"
gcc -Wall -m64 -no-pie -o main.out main.c -std=c17 -fno-use-linker-plugin

#Make sure the executable has permission to execute
chmod u+x main.out

echo "Run the program Chemistry:"
./main.out

echo "The script file will terminate"