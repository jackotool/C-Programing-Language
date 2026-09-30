/*  one_word_line 2026 Jack O'Toole
    print one word peer line, words are separated by whitespace replaced by a newline character
*/

#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            putchar('\n');
        } else {
            putchar(c);
        }
    }

    return 0;
}