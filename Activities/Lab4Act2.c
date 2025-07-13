#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (1 - 5): ");
    scanf("%d", &num);

    if (num >= 1 && num <= 5) {
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }} else {
        printf("Error: Number out of range!\n");}

    return 0;}
