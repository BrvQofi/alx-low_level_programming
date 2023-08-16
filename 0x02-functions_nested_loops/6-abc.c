#include <stdio.h>

// Function to calculate the absolute value of a number
int abs(int num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}

// Main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = abs(num);
    printf("The absolute value of %d is %d\n", num, result);
    return 0;
}
