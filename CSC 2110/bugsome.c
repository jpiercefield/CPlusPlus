#include <stdio.h>
#include <stdlib.h>
 
/* returns n * (n-1) * ... * 1  */
int factorial(int n)
{
   if (n == 1)
      return 1;
    return n * factorial(n - 1);
}
 
/* returns b^e , e>=0 */
int power(int b, int e)
{
   return b * power(b, e-1);
}

int main() 
{
   printf("11! = %d\n", factorial(11));

   printf("11^7 = %d\n", power(11, 7));
 
   return 0;
}
