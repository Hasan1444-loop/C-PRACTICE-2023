/* Write a program to find the price of the carpet */

#include <stdio.h>

int main(void)
{
 float carpet;
 int extra = 100;
 printf("Input the square meter: ");
 scanf("%f", &carpet);
 carpet = (carpet * 35) + extra;
 printf("Price: %7.2f TL", carpet);

 return 0;
}