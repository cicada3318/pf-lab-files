#include <stdio.h>

int main() {
    float price;
    char  grade;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter grade (A/B/C): ");
    scanf(" %c", &grade);  

    printf("Price (two decimals): %.2f\n", price);  // Task 2-c
    printf("Grade: %c\n", grade);

    return 0;
}

