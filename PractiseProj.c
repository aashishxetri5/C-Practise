#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    bool shouldContinue = true;
    int userPreference;
    
    printf("\nHey user, welcome\n");
    printf("Please select which of the following action you want to perform...\n\n");

showOptions:
    printf("Press '1' to calculate Simple Interest...\n");
    printf("Press '2' to find smallest number among three...\n");
    printf("Press '3' to find greatest number among three...\n");
    printf("Press '4' to find if you're elligible to vote...\n");
    printf("Press '5' to print table of any number...\n");
    scanf("%d", &userPreference);
    
    /*loops unless the user chooses to perform no more actions later in the program*/
    while (shouldContinue){

        switch (userPreference){
            int num1, num2, num3, age, number, principal;
            float rate, time;

        /*Prints Simple Interest*/
        case 1:
            
            printf("Enter Principle amount... ");
            scanf("%d", &principal);
            printf("Enter Rate... ");
            scanf("%f", &rate);
            printf("Enter Time of Investment... ");
            scanf("%f", &time);

            printf("The Simple Interest of Rs. %d in %.2f years at the rate of %.2f%% is : Rs. %.2f\n", principal, time, rate, (principal * rate * time) / 100);

            break;

        /*Prints the Smallest Number among three numbers given by User*/
        case 2:

            printf("Enter three numbers...\n");
            scanf("%d %d %d", &num1, &num2, &num3);

            if (num1 < num2 && num1 < num3){
                printf("%d is smaller than %d and %d", num1, num2, num3);
            }
            else if (num2 < num1 && num2 < num3){
                printf("%d is smaller than %d and %d", num2, num1, num3);
            }
            else if (num3 < num2 && num3 < num1){
                printf("%d is smaller than %d and %d", num3, num1, num2);
            }
            break;

        /*Prints the Greatest Number among three numbers given by User*/
        case 3:

            printf("Enter three numbers...\n");
            scanf("%d %d %d", &num1, &num2, &num3);
            
            if (num1 > num2 && num1 > num3){
                printf("%d is greater than %d and %d", num1, num2, num3);
            }
            else if (num2 > num1 && num2 > num3){
                printf("%d is greater than %d and %d", num2, num1, num3);
            }
            else if (num3 > num1 && num3 > num2){
                printf("%d is greater than %d and %d", num3, num1, num2);
            }
            break;

        /*Checks Voting elligibility*/
        case 4:

            printf("Enter your age... ");
            scanf("%d", &age);
                
            if (age >= 18){
                printf("You are elligible to vote.");
            }
            else{
                printf("You are not elligible to vote");
            }
            break;

        /*Prints Multiplication Table of input number upto 10x*/
        case 5:

            printf("Enter the number you want to print the table of...\n");
            scanf("%d", &number);

            for (int i = 1; i <= 10; i++){
                printf("%d * %d = %d\n", number, i, number * i);
            }
            break;

        default:
            printf("The input was invalid!!! \n");
        }

        int continuity;
        printf("\n\nWould you like to continue?(1/0)...\n"); // 1 = Yes and 0 = true
        scanf("%d", &continuity);

        if (continuity == 1){
            system("cls");
            goto showOptions;
        }else{
            shouldContinue = false;
            printf("Thank you for using this application. Have a Good Day!!");
        }
    }
}
