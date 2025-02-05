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
    printf("Thank you %s%s", user_title, user_name);

    char vol1[10], vol2[10], vol3[10];
    char alc1[10], alc2[10], alc3[10];

    printf("Please enter the volume (ml) of the liquid in beaker #1: ");
    fgets(vol1, 10, stdin);
    printf("Please enter the percent of alcohol in beaker #1 as decimal fraction: ");
    fgets(alc1, 10, stdin);

    printf("Please enter the volume (ml) of the liquid in beaker #2: ");
    fgets(vol2, 10, stdin);
    printf("Please enter the percent of alcohol in beaker #2 as decimal fraction: ");
    fgets(alc2, 10, stdin);

    printf("Please enter the volume (ml) of the liquid in beaker #3: ");
    fgets(vol3, 10, stdin);
    printf("Please enter the percent of alcohol in beaker #3 as decimal fraction: ");
    fgets(alc3, 10, stdin);

    printf("Thank you for entering these data. The results are being computed.");
    
}

