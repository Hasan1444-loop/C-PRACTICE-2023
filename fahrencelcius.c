/*Write a C program that converts a temperature in degrees Fahrenheit to Celsius degrees*/
#include <stdio.h>

int main(void)
{
 double celcius, Fahrenheit;
 printf("Enter the temperature in degrees Fahrenheit: "); // get the fahrenheit degree
 scanf("%lf", &Fahrenheit);
 celcius = (Fahrenheit - 32) * 5 / 9; // convert fahrenheit degree to the  celcius degree
 printf("%5.2f degrees fahrenheit is equal to %5.2f degrees celcius", Fahrenheit, celcius);

 return 0;
}