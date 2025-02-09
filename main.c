//CPSC 223C Assingment 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void trim(char *s) {
    s[strcspn(s, "\n")] = '\0';
}

int main() {
    time_t current_time = time(NULL);
    struct tm * broken = localtime(&current_time);

    printf("Welcome to Modern Chemistry brought to by Chief Software Engineer Ethan Rios\n");
    printf("The time is now %04d %s %02d @ %02d:%02d%s\n",
                                        broken->tm_year+1900, //year
                                        (char*[]) {"January", "February", "March", "April", "May", "June", "July", 
                                        "August", "September", "October", "November", "December"} [broken->tm_mon], //printed out month
                                        broken->tm_mday,
                                        (broken->tm_hour % 12) == 0 ? 12 : broken->tm_hour % 12, //12 hour system
                                        broken->tm_min, //minute
                                        broken->tm_hour < 12 ? "am" : "pm"); //am or pm

    char user_name[25];
    char user_title[15];

    printf("Please enter your user name: ");
    fgets(user_name, 25, stdin);
    trim(user_name);
    printf("Please enter your title: (Director, Sargent, Ms, Chief, Engineer, Fishmonger, etc): ");
    fgets(user_title, 15, stdin);
    trim(user_title);
    printf("Thank you %s %s\n", user_title, user_name);

    char vol1[10], vol2[10], vol3[10];
    char alc1[10], alc2[10], alc3[10];

    printf("Please enter the volume (ml) of the liquid in beaker #1: ");
    fgets(vol1, 10, stdin);
    trim(vol1);
    printf("Please enter the percent of alcohol in beaker #1 as decimal fraction: ");
    fgets(alc1, 10, stdin);
    trim(alc1);

    printf("Please enter the volume (ml) of the liquid in beaker #2: ");
    fgets(vol2, 10, stdin);
    trim(vol2);
    printf("Please enter the percent of alcohol in beaker #2 as decimal fraction: ");
    fgets(alc2, 10, stdin);
    trim(alc2);

    printf("Please enter the volume (ml) of the liquid in beaker #3: ");
    fgets(vol3, 10, stdin);
    trim(vol3);
    printf("Please enter the percent of alcohol in beaker #3 as decimal fraction: ");
    fgets(alc3, 10, stdin);
    trim(alc3);

    printf("Thank you for entering these data. The results are being computed.\n");

    double volume1 = strtod(vol1, NULL);
    double volume2 = strtod(vol2, NULL);
    double volume3 = strtod(vol3, NULL);
    double alcohol1 = strtod(alc1, NULL);
    double alcohol2 = strtod(alc2, NULL);
    double alcohol3 = strtod(alc3, NULL);
    double final_vol = volume1 + volume2 + volume3;
    double final_acl = ((volume1 * alcohol1) + (volume2 * alcohol2) + (volume3 * alcohol3)) / final_vol * 100;

    printf("The final beaker contains %lf ml of fluid of which %lf percent is alcohol.\n", final_vol, final_acl);
    printf("The time is now %04d-%s-%02d @ %02d:%02d%s\n",
                                        broken->tm_year+1900, //year
                                        (char*[]) {"January", "February", "March", "April", "May", "June", "July", 
                                        "August", "September", "October", "November", "December"} [broken->tm_mon], //printed out month
                                        broken->tm_mday, //day
                                        (broken->tm_hour % 12) == 0 ? 12 : broken->tm_hour % 12, //12 hour system
                                        broken->tm_min, //minute
                                        broken->tm_hour < 12 ? "am" : "pm"); //am or pm
    printf("The time since the epoch is now %ld seconds.\n", current_time);
    printf("Have a good day %s %s\n", user_title, user_name);
    printf("A zero will be returned to the operating system\n");
    printf("==================================== End of execution ====================================\n");
    
    return 0;
}