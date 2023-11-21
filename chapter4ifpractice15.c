#include <stdio.h>

int main(void)
{
 char ch;
 double sqrmeter;

 printf("Enter the carpet type(T/B/S): ");
 scanf("%c", &ch);

 printf("Enter the meter: ");
 scanf("%lf", &sqrmeter);

 if (ch == 'T')
 {
  sqrmeter = sqrmeter * 18.80;
  printf("Total Cost: %8.2lf TL", sqrmeter);
 }
 else if (ch == 'B')
 {
  sqrmeter = sqrmeter * 17.80;
  printf("Total Cost: %8.2lf TL", sqrmeter);
 }
 else if (ch == 'S')
 {
  sqrmeter = sqrmeter * 19.20;
  printf("Total Cost: %8.2lf TL", sqrmeter);
 }
 return 0;
}