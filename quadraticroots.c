#include <stdio.h>
#include <math.h>
void find(int a, int b, int c);
int main(void)
{
 int a, b, c;
 printf("Input A, B and C: ");
 scanf("%d%d%d", &a, &b, &c);

 find(a, b, c);
 return 0;
}

void find(int a, int b, int c)
{
 double first, second;
 double disc = b * b - 4 * a * c;
 if (disc > 0)
 {
  first = -b + sqrt(disc) / (2 * a);
  second = b - sqrt(disc) / (2 * a);

  printf("Root 1: %5.2lf\n", first);
  printf("Root 2: %5.2lf\n", second);
 }
 else if (disc == 0)
 {
  first = second = -b / (2.0 * a);
  printf("Root 1: %5.2lf\n", first);
 }
 else
 {
  first = -b / (2. * a);
  second = sqrt(-disc) / (2. * a);

  printf("Root 1: %5.2lf\n", first);
  printf("Root 2: %5.2lf\n", second);
 }
}
