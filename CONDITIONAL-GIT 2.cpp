#include <stdio.h>

int main() {
    int number;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Checking whether the number is even or odd
    if (number % 2 == 0) {
        printf("%d is an Even number.\n", number);
    } else {
        printf("%d is an Odd number.\n", number);
    }

    return 0;
}

