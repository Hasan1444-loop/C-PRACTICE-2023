#include <stdio.h>

int main(void)
{
 double gpa;
 char student;

 printf("Input the gpa: ");
 scanf("%lf", &gpa);

 printf("Input the student type(F/S/J/E): ");
 scanf(" %c", &student);

 if (student == 'F')
 {
  if (gpa >= 3.5)
  {
   printf("Eligible for full scholarship");
  }
  else if ((gpa >= 3.0) && (gpa <= 3.49))
  {
   printf("Eligible for partial scholarship");
  }
  else
  {
   printf("Not eligible for scholarship");
  }
 }

 else if (student == 'S')
 {
  if (gpa >= 3.8)
  {
   printf("Eligible for full scholarship");
  }
  else if ((gpa >= 3.2) && (gpa <= 3.79))
  {
   printf("Eligible for partial scholarship");
  }
  else
  {
   printf("Not eligible for scholarship");
  }
 }
 else if (student == 'J')
 {
  if (gpa >= 3.7)
  {
   printf("Eligible for full scholarship");
  }
  else if ((gpa >= 3.1) && (gpa <= 3.69))
  {
   printf("Eligible for partial scholarship");
  }
  else
  {
   printf("Not eligible for scholarship");
  }
 }
 else if (student == 'E')
 {
  if (gpa >= 4.0)
  {
   printf("Eligible for full scholarship");
  }
  else if ((gpa >= 3.5) && (gpa <= 3.99))
  {
   printf("Eligible for partial scholarship");
  }
  else
  {
   printf("Not eligible for scholarship");
  }
 }

 else
 {
  printf("ERROR\n");
 }

 return 0;
}