/*  arrays 2026 Jack O'Toole 
    count digits , white space, others in input
*/

#include <stdio.h>

int main() {
    int c, i, ndigits[10], nwhite, nother;
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)  // initialize array elements to 0
        ndigits[i] = 0;
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++ndigits[c - '0']; // c - '0' converts the character to an integer value
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigits[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
 
 
 /*   printf("Histogram of digits:\n");
   printf("White space:\t");
    for (i = 0; i < nwhite; ++i)
        putchar('*'); // print a star for each white space character
    printf("\nOther:\t");
    for (i = 0; i < nother; ++i)
        putchar('*'); // print a star for each other character
*/
    return 0;
}