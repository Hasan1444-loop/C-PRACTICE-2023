/* Write a C program that takes two integers, x and y, as input from the user. The program
should then determine the value of the result based on the following conditions*/

#include <stdio.h>

int main(void)
{
 int x, y, div;
 printf("Enter two integers: ");
 scanf("%d%d", &x, &y);

 if (x <= 0 && y < 0)
 {
  div = x / y;
  printf("result: %d", div);
 }
 else
 {
  printf("condition could not met");
 }
 return 0;
}