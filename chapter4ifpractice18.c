#include <stdio.h>

int main(void)
{
 double call, price;

 printf("Enter the call time(in minutes): ");
 scanf("%lf", &call);

 if (call <= 3)
 {
  price = 0.25;
  printf("Price: %4.2lf TL", price);
 }
 else if (call > 3)
 {
  price = 0.25 + ((call - 3.0) * 0.08);
  printf("Price: %4.2lf TL", price);
 }
 else
 {
  printf("You entered a wrong input!!");
 }
 return 0;
}