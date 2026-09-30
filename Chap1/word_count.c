/*  word_count 2026 Jack O'Toole
    count words in input
*/

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, nl, nw, nc, state;
    
    state = OUT;
    nl = nw = nc = 0;// expressions are evaluated right to left, so this is equivalent to nl = 0; nw = 0; nc = 0;
   
    while ((c = getchar()) != EOF) {
        ++nc;
        if  (c == '\n') // escape sequence can be replaced with an ascii value, in this case 10
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("Number of lines: %d\n", nl);
    printf("Number of words: %d\n", nw);
    printf("Number of characters: %d\n", nc);
    return 0;
}