/*  int_2 2026 Jack O'Toole
    right justif output by "%3d %6d\n"
    simple use of integers with printf
  */

#include <stdio.h>

int main() {
    float fahr,celsius;
    float lower,upper,step;
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper){
    celsius = 5.0 / 9.0 * (fahr - 32.0);  // no integer truncation  
        printf("%3.0f\t%6.1f\n",fahr,celsius); 
        /* format fahr 3 digits no decimal, celsius 6 digits 1 decimal
           format is f (float)
           fahr - 32 , 32 is converted to float, 32.0 is clearer 
           brackets around 5.0/9.0 are only for clarity
        */
        fahr = fahr + step;
    }
    return 0;
}