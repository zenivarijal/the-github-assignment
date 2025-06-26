#include <stdio.h>

int main(void) {
    char name[50];
    printf("What's your name? ");
    scanf("%49s", name);  // Read a word (up to 49 chars)
    printf("Nice to meet you, %s!\n", name);
    return 0;
}

