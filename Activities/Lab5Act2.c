#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int is_palindrome = 1; 

    printf("Enter a string: ");
    scanf("%s", str); 

    int len = strlen(str);

    // comparing front and back characters
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            is_palindrome = 0; 
            break; 
        }
    }

    if (is_palindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is NOT a palindrome.\n", str);
    }

    return 0;
}
