#include <stdio.h>

int main() {
    int numbers[5], i, maximum, min;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    maximum = min = numbers[0]; 

    for (i = 1; i < 5; i++) {
        if (numbers[i] > maximum)
            maximum = numbers[i];
        if (numbers[i] < min)
            min = numbers[i];
    }

    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", min);

    return 0;
}
