//CPSC 223C Assingment 1
#include <stdio.h>

int main() {
    printf("Welcome to Modern Chemistry brought to by Chief Software Engineer Ethan Rios\n");
    printf("The time is now \n");

    char user_name[25];
    char user_title[15];

    printf("Please enter your user name: ");
    fgets(user_name, 25, stdin);
    printf("Please enter your title: (Director, Sargent, Ms, Chief, Engineer, Fishmonger, etc): ");
    fgets(user_title, 15, stdin);
    printf("Thank you %s %s", user_title, user_name);

    //char vol1, vol2, vol3;
    //char alc1, alc2, alc3;

    printf("Please enter the volume (ml) of the liquid in beaker #1: ");
}

