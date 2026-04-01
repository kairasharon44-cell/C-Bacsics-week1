#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Ask the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Determine the largest number
    largest = num1;  // Assume num1 is largest

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    // Print the largest number
    printf("The largest number is %d\n", largest);

    return 0;
}
