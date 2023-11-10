/*Write a C program that gets a five-digit number from the user and calculates the sum of
its digits. */

#include <stdio.h>

int main(void)
{
 int num, num1, num2, num3, num4, num5, total;
 printf("Enter a five-digit number: ");
 scanf("%d", &num);

 num1 = num % 10;
 num = num / 10;

 num2 = num % 10;
 num = num / 10;

 num3 = num % 10;
 num = num / 10;

 num4 = num % 10;
 num = num / 10;

 num5 = num;

 total = num1 + num2 + num3 + num4 + num5;
 printf("Total: %d", total);

 return 0;
}