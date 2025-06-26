#include <stdio.h>
int main(void) {
    double num;

    printf("Enter a number: ");
    if (scanf("%lf", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num > 0.0) {
        printf("You entered a positive number.\n");
    } else if (num < 0.0) {
        printf("You entered a negative number.\n");
    } else {
        printf("You entered zero.\n");
    }

    return 0;
}

