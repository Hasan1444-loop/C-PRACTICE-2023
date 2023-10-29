/* write a C program to find a car's mile*/

#include <stdio.h>
#define MIL 1.609344
int main(void)
{
 float mile, km;
 printf("Enter the mile: ");
 scanf("%f", &mile);
 km = mile * MIL;
 printf("The car made %8.5f km", km);

 return 0;
}