#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows : "); // user defined input
    scanf("%d", &rows);
    for(i=1; i<=rows; i++) // number of rows
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");// blank space printing
        }
        for(j=1; j<=i; j++)
        {
            if(i==rows || j==1 || j==i)// number of stars printed with condition
            {
                printf("*");//// If condition successful print star.
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
