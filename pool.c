/* Write a C program that takes the width, length and height of a pool in meters,
calculates how many cubic meters of water are required to fill the pool and displays it on the screen.*/
#include <stdio.h>

int main(void)
{
 float pool, width, length, height;
 printf("Input width: ");
 scanf("%f", &width);
 printf("Input length: ");
 scanf("%f", &length);
 printf("Input height: ");
 scanf("%f", &height);
 pool = width * length * height;
 printf("Pool can take up %3.2f cubic meters of water", pool);

 return 0;
}


