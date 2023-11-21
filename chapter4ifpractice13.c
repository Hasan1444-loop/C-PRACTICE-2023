#include <stdio.h>
#include <math.h>

int main(void)
{
 double x;
 printf("Enter x: ");
 scanf("%lf", &x);

 if (x <= 0)
 {
  printf("x = 0\n");
 }
 else if ((x > 0) && (x <= 10))
 {
  x = 3.0 / (sqrt(pow(x, 3)) + 1.0);
  printf("x = %lf", x);
 }
 else
 {
  x = cos(x) + 2.0 * (x * x);
  printf("x = %6.2lf", x);
 }
 return 0;
}