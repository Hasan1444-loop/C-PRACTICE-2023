#include <stdio.h>
void sum(int a, int b);
void multi(int a, int b);
void div(int a, int b);
void sub(int a, int b);
void stop(void);
int main(void)
{
 char ch;
 int x, y;

 printf("Choose an operator (+ , - , /, *, S): ");
 scanf(" %c", &ch);
 while (ch != 'S')
 {
  printf("Enter two integers: ");
  scanf("%d %d", &x, &y);

  if (ch == '+')
  {
   sum(x, y);
  }
  else if (ch == '*')
  {
   multi(x, y);
  }
  else if (ch == '/')
  {
   div(x, y);
  }
  else if (ch == '-')
  {
   sub(x, y);
  }
  else if (ch == 'S')
  {
   stop();
  }
  printf("\nChoose an operator (+ , - , /, *, S): ");
  scanf(" %c", &ch);
 }
 return 0;
}
void sum(int a, int b)
{
 int sum = a + b;
 printf("%d + %d = %d", a, b, sum);
}
void multi(int a, int b)
{
 int multi = a * b;
 printf("%d * %d = %d", a, b, multi);
}
void div(int a, int b)
{
 double div = a / b;
 printf("%d /%d = %lf", a, b, div);
}
void sub(int a, int b)
{
 int sub = a - b;
 printf("%d - %d = %d", a, b, sub);
}
void stop(void)
{
}