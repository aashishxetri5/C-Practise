#include <stdio.h>

int main()
{
    char fName[50] = " ", mName[50] = " ", lName[50] = " ";
    printf("Enter your Full Name(F,M,L)...");
    scanf("%s %s %s", &fName, &mName, &lName);

    printf("Your name's abbreviated form is: %c.%c.%c.", fName[0], mName[0], lName[0]);
}