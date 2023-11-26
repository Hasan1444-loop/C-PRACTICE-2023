#include <stdio.h>

int main(void)
{
 int num1, num2, step;

 printf("Enter the first number: ");
 scanf("%d", &num1);

 printf("Enter the second number: ");
 scanf(" %d", &num2);

 printf("Enter the step size: ");
 scanf(" %d", &step);

 while (num1 <= num2)
 {
  printf(" %d", num1);
  num1 += step;
 }
 return 0;
}
