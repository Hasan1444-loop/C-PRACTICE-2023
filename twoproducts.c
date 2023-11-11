/*Write a C program that takes the prices of two products as input, and if the total price
exceeds 200 TL, it displays ‘You have earned a discount.’ Otherwise, the program
displays ‘You have not earned a discount.*/

#include <stdio.h>

int main(void)
{
 int x, y, total;
 printf("Enter the first price: ");
 scanf("%d", &x);
 printf("Enter the second price: ");
 scanf("%d", &y);
 total = x + y;

 if (total > 200)
 {
  printf("You have earned a discount");
 }
 else
 {
  printf("You have not earned a discount");
 }

 return 0;
}