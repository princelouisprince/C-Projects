#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);  // use gets(name) for spaces, though unsafe
    printf("Hello, %s!\n", name);
    return 0;
}

