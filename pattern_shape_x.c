//Print shape-x in pattern in programming in c.

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(row==col || row+col==n+1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

