#include<stdio.h>

int main()
{
    int i,N,series;


    printf("Enter the value of N: ");
    scanf("%d",&N);
    series=0;
    for(i=1;i<=N;i++)
        series=series+ i;

    printf("Sum of the series is: %d\n",series);

    return 0;
}
