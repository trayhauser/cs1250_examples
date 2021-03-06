#include <stdio.h>
#define N 100000

int main(void)
{
   float max = 1.0, min = 0.0, test;
   int i;                              /* Counter for the conditional loop */

   for (i = 0; i < N; i++) 
   {
      test = (max + min) / 2.0;
      if( (1.0 + test) != 1.0)         /* If too high, set max to test and try again */
     max = test;
     if( (1.0 + test) == 1.0)     /* If too low, set min to test and try again */
       min = test;
   }
   printf("The epsilon machine is %.50lf\n", max);
   return 0;
}
