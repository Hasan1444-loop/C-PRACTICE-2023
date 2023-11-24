#include <stdio.h>

int main(void)
{
 int angle1, angle2, angle3;

 printf("Enter three angle: ");
 scanf("%d%d%d", &angle1, &angle2, &angle3);
 if (angle1 + angle2 + angle3 == 180)
 {
  if ((angle1 == 60) && (angle2 == 60) && (angle3 == 60))
  {
   printf("This is equilateral triangle");
  }
  else if ((angle1 == angle2) || (angle1 == angle3) || (angle2 == angle3))
  {
   printf("This is an isosceles triangle");
  }
  else
  {
   printf("This is a scalene triangle");
  }
 }
 else
 {
  printf("We cannot create a triangle");
 }
 return 0;
}