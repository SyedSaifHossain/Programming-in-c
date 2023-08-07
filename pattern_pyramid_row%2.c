//Print row%2 in pattern pyramid in programming in c.

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
        for(col=1; col<=row*2-1; col++)
        {
            printf("%d ",row%2);
        }
        printf("\n");
    }
    return 0;
}


