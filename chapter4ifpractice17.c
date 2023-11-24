#include <stdio.h>
#define convert 1.609344
int main(void)
{
 char ch;
 double mil, km, road;
 printf("Choose mile or km(mil: M/m or km: K/k): ");
 scanf("%c", &ch);

 printf("Enter mile/km?: ");
 scanf("%lf", &road);

 if (ch == 'M' || ch == 'm')
 {
  mil = road * convert;
  printf("%lf mil: %6.2lf", road, mil);
 }
 else if (ch == 'K' || ch == 'k')
 {
  km = road / convert;
  printf("%6.2lf km: %6.2lf Mil", road, km);
 }
}