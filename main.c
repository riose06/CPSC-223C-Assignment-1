/*
 * Name: Ethan Rios
 * CWID: 880071006
 * Email: eirios@csu.fullerton.edu
*/

// TITLE: CPSC 223C Assingment 1 >>> Chemistry
// "./a1.sh" in terminal will run bash program!!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Removes the built-in next line (\n) when using the fgets() function
void trim(char *s) {
    s[strcspn(s, "\n")] = '\0';
}

int main() {
    // Get the current time and update the broken time
    time_t current_time = time(NULL);
    struct tm * broken = localtime(&current_time);

    printf("\nWelcome to Modern Chemistry brought to by Chief Software Engineer Ethan Rios.\n");
    printf("The time is now %04d %s %02d @ %02d:%02d%s.\n\n",
                                        broken->tm_year+1900, // Year
                                        (char*[]) {"January", "February", "March", "April", "May", "June", "July", 
                                        "August", "September", "October", "November", "December"} [broken->tm_mon], // Printed out month
                                        broken->tm_mday, // Day
                                        (broken->tm_hour % 12) == 0 ? 12 : broken->tm_hour % 12, // 12 hour system
                                        broken->tm_min, // Minute
                                        broken->tm_hour < 12 ? "am" : "pm"); // am or pm

    // Create variables for users name and title
    char user_name[25];
    char user_title[15];

    // Ask user to enter name and trim extra line from fgets()
    printf("Please enter your user name: ");
    fgets(user_name, 25, stdin);
    trim(user_name);

    // Ask user to enter title and trim extra line from fgets()
    printf("Please enter your title: (Director, Sargent, Ms, Chief, Engineer, Fishmonger, etc): ");
    fgets(user_title, 15, stdin);
    trim(user_title);

    // Print users title and name
    printf("\nThank you %s %s.\n\n", user_title, user_name);

    // Create volume and alcohol variables that user 
    // will use to enter their values of choice
    char vol1[10], vol2[10], vol3[10];
    char alc1[10], alc2[10], alc3[10];

    // Ask user for beaker 1 volume and trim fgets()
    printf("Please enter the volume (ml) of the liquid in beaker #1: ");
    fgets(vol1, 10, stdin);
    trim(vol1);

    // Ask user for beaker 1 alchol concentration and trim fgets()
    printf("Please enter the percent of alcohol in beaker #1 as decimal fraction: ");
    fgets(alc1, 10, stdin);
    trim(alc1);

    // Ask user for beaker 2 volume and trim fgets()
    printf("Please enter the volume (ml) of the liquid in beaker #2: ");
    fgets(vol2, 10, stdin);
    trim(vol2);

    // Ask user for beaker 2 alchol concentration and trim fgets()
    printf("Please enter the percent of alcohol in beaker #2 as decimal fraction: ");
    fgets(alc2, 10, stdin);
    trim(alc2);

    // Ask user for beaker 3 volume and trim fgets()
    printf("Please enter the volume (ml) of the liquid in beaker #3: ");
    fgets(vol3, 10, stdin);
    trim(vol3);

    // Ask user for beaker 3 alchol concentration and trim fgets()
    printf("Please enter the percent of alcohol in beaker #3 as decimal fraction: ");
    fgets(alc3, 10, stdin);
    trim(alc3);

    printf("\nThank you for entering the data. The results are being computed.\n\n");

    // Take the users inputted values and use strtod() to convert them to doubles
    double volume1 = strtod(vol1, NULL);
    double volume2 = strtod(vol2, NULL);
    double volume3 = strtod(vol3, NULL);
    double alcohol1 = strtod(alc1, NULL);
    double alcohol2 = strtod(alc2, NULL);
    double alcohol3 = strtod(alc3, NULL);

    // Perform math calculations to find final volume and alcohol concentration
    // Assign the answers to final variables
    double final_vol = volume1 + volume2 + volume3;
    double final_acl = ((volume1 * alcohol1) + (volume2 * alcohol2) + (volume3 * alcohol3)) / final_vol * 100;

    printf("The final beaker contains %lf ml of fluid of which %lf percent is alcohol.\n", final_vol, final_acl);

    current_time = time(NULL);  // Get new current time
    broken = localtime(&current_time);  // Update broken time 
    printf("The time is now %04d %s %02d @ %02d:%02d%s.\n",
                                        broken->tm_year+1900, // Year
                                        (char*[]) {"January", "February", "March", "April", "May", "June", "July", 
                                        "August", "September", "October", "November", "December"} [broken->tm_mon], // Printed out month
                                        broken->tm_mday, // Day
                                        (broken->tm_hour % 12) == 0 ? 12 : broken->tm_hour % 12, // 12 hour system
                                        broken->tm_min, // Minute
                                        broken->tm_hour < 12 ? "am" : "pm"); // am or pm

    // Print time since epoch in seconds using current_time
    printf("The time since the epoch is now %ld seconds.\n", current_time);

    // Conclusion
    printf("Have a good day %s %s.\n", user_title, user_name);
    printf("A zero will be returned to the operating system.\n\n");
    printf("==================================== End of execution ====================================\n");
    
    return 0;
}