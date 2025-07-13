#include <stdio.h>

int main() {
    // ASCII value 177 = shaded gray box
    char allBoxes[5] = {177, 177, 177, 177, 177};

    printf("Array of gray boxes:\n");
    for (int i = 0; i < 5; i++) {
        printf("[%c] ", allBoxes[i]); 
    }

    return 0;
}
