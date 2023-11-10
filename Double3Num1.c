/* Write a C program which asks the user to input three floating point values (a, b and c) */

#include <stdio.h>

int main(void)
{
 double a, b, c, X;
 printf("Enter 3 numbers: ");
 scanf("%lf%lf%lf", &a, &b, &c);
 X = (3 * a + 4 * b) / 2 + 6 * c;
 printf("The result is %5.2lf ", X);

 return 0;
}