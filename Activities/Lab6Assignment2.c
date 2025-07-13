#include <stdio.h>
int main() {
    int numbers[5], i, j, temp;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);}
    // Ascending Order
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (nums[i] > nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp; } }}
    printf("Ascending order: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", nums[i]);}
    // Descending Order
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (nums[i] < nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp; }  } }
    printf("\nDescending order: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    return 0;}
