//Print capital charecter oposite floyd triangle in pattern print in programming in c.

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf("  ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%c ",col+64);
        }
        for(col=row-1; col>=1; col--)
        {
            printf("%c ",col+64);
        }
        printf("\n");
    }

    return 0;
}


