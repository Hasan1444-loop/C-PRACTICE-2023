#include <stdio.h>

int main(void)
{
  int angle1, angle2, angle3;

  printf("Enter three angle: ");
  scanf("%d%d%d", &angle1, &angle2, &angle3);

  if (angle1 + angle2 + angle3 == 180)
  {
    if (angle1 < 90 && angle2 < 90 && angle3 < 90)
    {
      printf("This is an acute angled triangle\n");
    }
    else if (angle1 > 90 || angle2 > 90 || angle3 > 90)
    {
      printf("This is a obtuse angled triangle\n");
    }
    else if (angle1 == 90 || angle2 == 90 || angle3 == 90)
    {
      printf("This is a right angled triangle\n");
    }
  }
  else
  {
    printf("We cannot create a triangle\n");
  }

  return 0;
}
