/*Write a C program to evaluate the following expressions after inputting double a, b, c
from the user and output the results on the screen*/

#include <stdio.h>

int main(void)
{
 double a, b, c, x, y, z;
 printf("Enter a: ");
 scanf("%lf", &a);
 printf("Enter b: ");
 scanf("%lf", &b);
 printf("Enter c: ");
 scanf("%lf", &c);
 x = a / 2 - b * 3 + c * 7 + 4.2;
 y = (a + b) / (3 - c) * 7.1 + 2;
 z = a + (b / (5 + c) * 3.3) * 2;

 printf("x: %.2lf\ny: %.2lf\nz: %.2lf\n", x, y, z);

 return 0;
}