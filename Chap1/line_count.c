/*  line_count 2026 Jack O'Toole
    count lines in input
*/

#include <stdio.h>

int main() {
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if  (c == '\n') // escape sequence can be replaced with an ascii value, in this case 10
            ++nl;
    }
    printf("Number of lines: %d\n", nl);
    return 0;
}