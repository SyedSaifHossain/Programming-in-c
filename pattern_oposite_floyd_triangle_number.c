//Print number oposite floyd triangle in pattern in programming in c.

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
            printf("%d ",col);
        }
        for(col=row-1; col>=1; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }

    return 0;
}

