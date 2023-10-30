/*    enter two variables alpha and beta. then swap their values      */

#include <stdio.h>

int main(void)
{
 int alpha, beta;
 printf("Enter alpha: ");
 scanf("%d", &alpha);
 printf("Enter beta: ");
 scanf("%d", &beta);
 // swap the values
 alpha = alpha + beta;
 beta = alpha - beta;
 alpha = alpha - beta;

 printf("new alpha=%d\nnew beta=%d\n", alpha, beta);

 return 0;
}