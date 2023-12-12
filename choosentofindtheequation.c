#include <stdio.h>
int f1(int n);
int f2(int n);
int f3(int n);
int main(void)
{
 int n, first, second, third;

 printf("Input n: ");
 scanf("%d", &n);

 if (n >= 30)
 {
  first = f1(n);
  printf("Result: %d", first);
 }
 else if (10 < n && n < 30)
 {
  second = f2(n);
  printf("Result: %d", second);
 }
 else if (0 < n && n <= 10)
 {
  third = f3(n);
  printf("Result: %d", third);
 }
 else
 {
  printf("You inputted a wrong integer!");
 }
 return 0;
}
int f1(int n)
{
 int num = 1, denom;
 float counter = 0, sum = 0;
 for (denom = 1; denom <= 2 * n + 1; denom += 2)
 {
  counter += denom;
  sum += num / counter;
 }
 return sum;
}
int f2(int n)
{
 int i, counter = 0;
 for (i = 2; i <= 2 * n; i += 2)
 {
  counter += i;
 }
 return counter;
}
int f3(int n)
{
 int j, counter = 1;
 for (j = 1; j <= n; j++)
 {
  counter *= j;
 }
 return counter;
}