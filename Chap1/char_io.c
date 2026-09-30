/*  char_io 2026 Jack O'Toole
    copy input to output Version 1
    when characters are type on the keyboard they are stored in a buffer and not sent to the program until the enter key is pressed
    the program will not run until the enter key is pressed. getchar reads from the buffer 
    one char at a time and putchar writes to the output one char at a time.
    */

#include <stdio.h>

int main() {
    int c;
    /* output the first character typed on the keyboard. If multiple characters are typed before the enter key is pressed, 
    only the first character will be output. The rest of the characters will remain in the buffer and will be output
     by subsequent calls to getchar.*/

    printf("Type a character and press enter\n");
    c= getchar();
    putchar(c);


  // getchar returns an int, not a char, so that it can return EOF which is -1
  /*  c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    */
   // compact veersion of the above code
   printf("Type characters and press enter, to end input press ctrl-Z followed by enter.\n"); 
   while ((c = getchar()) != EOF) {
        putchar(c);
    }
    
    /*
        parentheses around the assignment are required because the precedence of != is higher than =
    
     */
    return 0;
}