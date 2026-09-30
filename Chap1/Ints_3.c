/*  int_3 2026 Jack O'Toole
    right justif output by "%3d %6d\n"
    replace while with for loop
  */

#include <stdio.h>

int main() {
    int fahr;
    //float lower,upper,step;
    
    //lower = 0;
    //upper = 300;
    //step = 20;

   
   // for (fahr = 0; fahr <= 300; fahr = fahr + 20){

   //reverse order exercise

   for(fahr = 300; fahr >= 0; fahr = fahr - 20){
        printf("%3d\t%6.1f\n",fahr,( 5.0 / 9.0 * (fahr - 32.0) )); 

        /* using a for loop fahr is the only variable required, lower, upper and step are not needed
           the calculation of celsius is done in the printf statement
           the brackets around 5.0/9.0 are only for clarity
        */
        
    }/* curly braces are not reuired where there is only a single statement in the loop,
        but are good practice and make it easier to add more statements later
    */

    return 0;
}