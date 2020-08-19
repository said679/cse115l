
#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter number of rows: ");// user defined input
    scanf("%d", &N);

    for (i = 1; i <= N; i++) // i will execute as number of N determine by user.
    {
        for (j = 1; j <= N; j++)// Print star till j=r.
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
