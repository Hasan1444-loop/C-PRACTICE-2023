/* Write a C program to evaluate the following expressions after inputting integers (a, b, c)
from user and to output the results on the screen.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
 int a, b, c, X, Y, Z;
 printf("Input a: ");
 scanf("%d", &a);
 printf("Input b: ");
 scanf("%d", &b);
 printf("Input c: ");
 scanf("%d", &c);

 X = a / 4 - b * 3 + pow(c, 4) * 8 - 2;
 Y = a + pow(b, 3) / (5 - c) / (7 - 1);
 Z = pow(a, 2) + (b / (4 - c * c) * 2) * 4;
 printf("X = %d\nY = %d\nZ = %d\n", X, Y, Z);

 return 0;
}