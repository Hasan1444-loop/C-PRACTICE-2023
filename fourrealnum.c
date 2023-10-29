/* get 4 real numbers from the user and calculate the mean*/

#include <stdio.h>

int main(void)
{
 double num1, num2, num3, num4, Average;
 printf("Enter four real numbers: ");
 scanf("%lf%lf%lf%lf", &num1, &num2, &num3, &num4);
 Average = (num1 + num2 + num3 + num4) / 4.0;
 printf("Average: %7.4lf", Average);
 return 0;
}