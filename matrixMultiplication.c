#include <stdio.h>

int newMatrix[2][2], row, column, k, tempStore = 0;
int matrixA[2][2], matrixB[2][2];

int main()
{

    //Entering values to the first matrix.
    printf("Enter the value of matrix A. Press 'Enter' after each number...");
    for (row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            scanf("%d", &matrixA[row][column]);
        }
    }

    //Entering values to the second matrix B.
    printf("Enter the value of matrix A. Press 'Enter' after each number...");
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            scanf("%d", &matrixB[row][column]);
        }
    }

    for (row = 0; row < 2; row++)
    {
        for (column = 0; column < 2; column++)
        {
            for (k = 0; k < 2; k++)
            {
                tempStore += matrixA[row][k] * matrixB[k][column];
            }
            newMatrix[row][column] = tempStore;
            tempStore = 0;
        }
    }

    printf("\nThe matrix is::: \n");
    for (row = 0; row < 2; row++)
    {
        for (column = 0; column < 2; column++)
        {
            printf("%d\t", newMatrix[row][column]);
        }
        printf("\n");
    }
}
