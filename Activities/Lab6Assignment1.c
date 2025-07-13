#include <stdio.h>

int main() {
    char firstName[20], lName[20], fName[40];
    int i = 0, j = 0;

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lName);

    while (firstName[i] != '\0') {
        fName[i] = firstName[i];
        i++;}

    fName[i] = ' ';
    i++;

    while (lName[j] != '\0') {
        fName[i] = lName[j];
        i++;
        j++;}

    fName[i] = '\0';

    printf("Full Name: %s\n", fName);

    return 0;}
