#include <stdio.h>

int main(void)
{
 double num1, num2, output;
 char operator;

 printf("Choose the operator(+,-,*,/): ");
 scanf("%c", &operator);

 printf("Enter two numbers: ");
 scanf("%lf%lf", &num1, &num2);

 switch (operator)
 {
 case '+':
  output = num1 + num2;
  break;
 case '-':
  output = num1 - num2;
  break;
 case '*':
  output = num1 * num2;
  break;
 case '/':
  output = num1 / num2;
  break;
 default:
  break;
 }
 printf("num1%cnum2 = %6.2lf", operator, output);
 return 0;
}