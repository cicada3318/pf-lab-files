#include <stdio.h>
#include <string.h>

int main() {
    char firstName[20], lastName[20], fullName[40];

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);   

    strcpy(fullName, firstName);
    strcat(fullName, " ");          
    strcat(fullName, lastName);

    printf("Your full name is: %s\n", fullName);

    return 0;}
