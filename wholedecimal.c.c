/* Write a program that receives a real number from the user,
finds the whole and decimal parts of this real number and displays it on the screen.*/
#include <stdio.h>

int main()
{
    float number, decimalnum;
    int wholenum;
    printf("Input a real number ");
    scanf("%f", &number);
    wholenum = number;
    decimalnum = number - wholenum;
    printf("whole=%d", wholenum);
    printf("decimal=%f", decimalnum);
    
    return 0;
    
}
