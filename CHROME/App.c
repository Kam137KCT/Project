#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, i;
   printf("Enter A Number: ");
   scanf("%d", &num);
   printf("Factors Of %d Are: ", num);
   for (i = 1; i <= num; ++i){
      if (num % i==0) {
         printf("%d", i);
      }
   }
   return 0;
}
