#!/bin/bash

# Author: Ethan Rios
# CWID: 880071006
# Email: eirios@csu.fullerton.edu
# Due date: February 12, 2025 before 2:00am
# CPSC 223C Assingment 1

# PURPOSE: Program is intended to allow the user to insert their choice of volume of diesel fuel and 
#          additional alcohol concentrations for 3 seperate beakers. The program combines all 3 
#          beakers of diesel fuel together and provides the user with the total volume of diesel 
#          fuel, along with the alcohol concentration within that total amount. It also tells the
#          user the time at the start and the end of the program so they know how long it was 
#          running for. 

echo "Remove unnecessary files"
rm -f main.o main.out

echo "Compile main.c"
gcc -Wall -m64 -no-pie -o main.out main.c -std=c17 -fno-use-linker-plugin

#Make sure the executable has permission to execute
chmod u+x main.out

echo "Run the program Chemistry:"
./main.out

echo "The script file will terminate"