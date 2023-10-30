/*Get 3 odd numbers from user to find the given equation*/

#include <stdio.h>

int main(void)
{
 int a, b, c, n;
 printf("Enter 3 odd numbers: "); // get the numbers
 scanf("%d %d %d", &a, &b, &c);
 n = 100 * a + 10 * b + c;                   // solve the equation according to given numbers
 printf("Answer of the equation n: %d ", n); // show the answer on the screen

 return 0;
}