#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (1–5): ");
    scanf("%d", &num);

    if (num >= 1 && num <= 5) {
        printf("Multiplication Table of %d:\n", num);
        for (int i = 1; i <= 10; i++) {
            printf("%d × %d = %d\n", num, i, num * i);
        }
    } else {
        printf("Error: Number not in range (1–5)!\n");
    }

    return 0;
}
