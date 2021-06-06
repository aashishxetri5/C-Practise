/**leap year
 * 
 * This program checks is the entered year is a leap year.
 * 
 */

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year...");
    scanf("%d", &year);

    if (year%400 == 0 || (year % 100 != 0 && year % 4 == 0))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
}


