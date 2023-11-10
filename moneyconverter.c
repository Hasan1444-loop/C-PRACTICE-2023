/* Write a C program that inputs the amount of money in TL from the user and prints the
equivalent amount in terms of 5 TL, 10 TL, 50 TL, 100 TL and 200 TL*/

#include <stdio.h>

int main(void)
{
 int money;
 int a, b, c, d, e;
 printf("Please enter the amount in Turkish Lira: ");
 scanf("%d", &money);
 a = money / 200;
 b = money / 100;
 c = money / 50;
 d = money / 10;
 e = money / 5;
 printf("equal to %d * 200TL, %d * 100TL, %d * 50TL, %d * 10TL, and %d * 5TL", a, b, c, d, e);

 return 0;
}