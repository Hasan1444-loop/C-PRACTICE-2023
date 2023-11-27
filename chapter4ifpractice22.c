#include <stdio.h>

int main(void)
{
 char ch;

 printf("Enter a character: ");
 scanf("%c", &ch);

 if (ch >= 'a' && ch <= 'z')
 {
  printf("%c is a lower case letter", ch);
 }
 else if (ch >= 'A' && ch <= 'Z')
 {
  printf("%c is an upper case letter", ch);
 }
 else
 {
  printf("%c is not a letter", ch);
 }
 return 0;
}