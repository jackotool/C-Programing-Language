/*  int_4 2026 Jack O'Toole
    use defined constants
  */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    int fahr;
    
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        printf("%3d\t%6.1f\n",fahr,( 5.0 / 9.0 * (fahr - 32.0) )); 

        
    }/* 
        #define constants, written in uppercase, no semi colon.

    */

    return 0;
}