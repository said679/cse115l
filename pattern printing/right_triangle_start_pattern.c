#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter value of n: ");// user will define input
    scanf("%d", &n);

    for(i=1; i<=n; i++) // it will execute for number of rows
    {
        for(j=1; j<=i; j++) // it will execute for number of colums
        {
            printf("*");// here first one star colum,second row two star colum ,colum will increase by same number of rows
        }
        printf("\n");
    }

    return 0;
}
