/*
    Conditional Statements
    Jack OToole 2026, git test
*/

#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int z;
    if (a > b) {
        z = a;
    } else {
        z = b;
    }
    printf("The larger number is: %d\n", z);

    z = (a > b) ? a : b;

    printf("The larger number is: %d\n", z);

    return 0;
}