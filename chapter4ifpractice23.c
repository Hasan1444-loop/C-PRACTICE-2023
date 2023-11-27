#include <stdio.h>

int main(void)
{
 char ch;
 int num;

 printf("Enter a character: ");
 scanf("%c", &ch);

 if (ch >= 'a' && ch <= 'z')
 {
  num = ((int)ch - (int)'a' + 1);
  printf("%c: %d letter", ch, num);
 }
 else if (ch >= 'A' && ch <= 'Z')
 {
  num = ((int)ch - (int)'A' + 1);
  printf("%c: %dth letter", ch, num);
 }
 return 0;
}