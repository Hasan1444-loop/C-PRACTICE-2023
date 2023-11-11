/*Write a C program that takes three numbers from the user and checks if at least one of
them is greater than 50. If at least one of the numbers is greater than 50, it should display
'Sufficient.’ Otherwise, it should display 'Insufficient.’
*/
#include <stdio.h>

int main(void)
{
 int x, y, z;
 printf("Enter three integers: ");
 scanf("%d%d%d", &x, &y, &z);

 if (x > 50 || y > 50 || z > 50)
 {
  printf("Sufficient.");
 }
 else
 {
  printf("Insufficient");
 }

 return 0;
}