//Print star in pattern oposite pyramid in programming in c.

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf("  ");
        }
        for(col=1; col<=row*2-1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


