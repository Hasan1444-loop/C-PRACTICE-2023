/*Write a C program that takes a person's age as input and determines their life stage*/
#include <stdio.h>

int main(void)
{
 int age;
 printf("Enter your age: ");
 scanf("%d", &age);

 if (age >= 0 && age <= 5)
 {
  printf("Baby");
 }
 else if (age >= 6 && age <= 12)
 {

  printf("Child");
 }
 else if (age >= 13 && age <= 19)
 {
  printf("Teenager");
 }
 else if (age >= 20 && age <= 64)
 {
  printf("Adult");
 }
 else
 {
  printf("Elderly");
 }

 return 0;
}
