#include <stdio.h>

int main(void)
{
 char traffic;

 printf("Enter the traffic light(r/y/g): ");
 scanf("%c", &traffic);

 switch (traffic)
 {
 case 'r':
  printf("Stop\n");
  break;

 case 'y':
  printf("Proceed with caution\n");
  break;

 case 'g':
  printf("Go\n");
  break;
 }
 return 0;
}
