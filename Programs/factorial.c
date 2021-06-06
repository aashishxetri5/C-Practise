#include <stdio.h>

int main()
{
    int num, factorial=1;
    printf("Enter a number to calculate its factorial...");
    scanf("%d", &num);
    while (num != 0)
    {
        factorial = factorial * num--;
    }

    printf("\nIts factorial is %d", factorial);
}