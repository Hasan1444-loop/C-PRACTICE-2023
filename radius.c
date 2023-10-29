/* Write a C program that takes the radius of a circle in meters as input,
 calculates the area of this circle and displays it on the screen. */
 
 #include <stdio.h>
 #define PI 3.14159
 int main(void) {
     double radius, area;
     printf("Input radius: ");
     scanf("%lf", &radius);
     area = PI * (radius * radius);
     printf("Area of the circle: %f ", area);
     
     return 0;
     
 }
