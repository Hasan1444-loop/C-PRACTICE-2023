/* Write a C program which asks the user to input five integers and displays their remainder
of division with 7.*/

#include <stdio.h>

int main(void)
{
 int num1, num2, num3, num4, num5;
 printf("Enter five integers: "); // get 5 integers
 scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
 printf("Result: %d %d %d %d %d ", num1 % 7, num2 % 7, num3 % 7, num4 % 7, num5 % 7); // divide to 7 to find the remainder

 return 0;
}