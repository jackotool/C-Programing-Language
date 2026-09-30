/*  char_count_2 2026 Jack O'Toole
    use a for loop instead of a while loop to count characters
*/

#include <stdio.h>

int main() {
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("Number of characters: %.0f\n", nc);

    return 0;
}