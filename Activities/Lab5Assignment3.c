#include <stdio.h>

int main() {
    int count = 1;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%2d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
