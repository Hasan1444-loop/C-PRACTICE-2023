#include <stdio.h>
#include <math.h>

int main(void)
{
 int num = 5;
 double sum = 0;
 while (num <= 50)
 {
  sum += pow(num, 2);
  num++;
 }
 printf("Sum: %8.2f", sum);
 return 0;
}