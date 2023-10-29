/* write a c program that expect a time to calculate the average speed
of the car*/

#include <stdio.h>
#define ANK_IS_km 453

int main(void)
{
 float time, speed;
 printf("Enter the expected time: ");
 scanf("%f", &time);
 speed = ANK_IS_km / time;
 printf("Average speed of the car: %7.4f ", speed);

 return 0;
}