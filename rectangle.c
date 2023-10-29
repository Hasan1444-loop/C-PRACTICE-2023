/* Write a program that takes the side lengths of a rectangle from the user 
and displays the area and perimeter of this rectangle on the screen. */

#include <stdio.h>

int main()
{
    double kenarkisa,kenaruzun, alan, cevre;
    printf("Kisa kenar: ");
    scanf("%lf", &kenarkisa);
    printf("Uzun kenar: ");
    scanf("%lf", &kenaruzun);
    alan = kenarkisa * kenaruzun;
    cevre = 2 * (kenarkisa + kenaruzun);
    printf("dikdortgenin alanı=%lf\n, dikdortgenin cevresi =%lf", alan, cevre);
    

    return 0;
}
