#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter rows: ");// user define
    scanf("%d", &rows);

    for(i=1; i<=rows; i++) // i will execute as row variable
    {
        for(j=1; j<=rows - i; j++)//number of colums where blank space will print
        {
            printf(" ");// printing space according to the value of rows and i.
        }
        for(j=1; j<=rows; j++)
        {
            printf("*");// Printing star till j=rows.
        }
        printf("\n");
    }

    return 0;
}
