#include <stdio.h>

int main(void)
{
 char vowels;
 int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0;
 int i = 0;
 printf("Input a serie: ");

 while (i < 20)
 {
  scanf(" %c", &vowels);
  switch (vowels)
  {
  case 'A':
   counter1++;
   break;
  case 'E':
   counter2++;
   break;
  case 'I':
   counter3++;
   break;
  case 'O':
   counter4++;
   break;
  case 'U':
   counter5++;
   break;
  default:
   break;
  }
  i++;
 }
 printf("'A' repeated %d time(s)\n", counter1);
 printf("'E' repeated %d time(s)\n", counter2);
 printf("'I' repeated %d time(s)\n", counter3);
 printf("'O' repeated %d time(s)\n", counter4);
 printf("'U' repeated %d time(s)\n", counter5);

 return 0;
}