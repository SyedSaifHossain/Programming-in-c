//Print small charecter floyd triangle in pattern in programming in c.

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf("  ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%c ",col+96);
        }
        for(col=row-1; col>=1; col--)
        {
            printf("%c ",col+96);
        }
        printf("\n");
    }
    return 0;
}

