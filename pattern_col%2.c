//Print number column%2 column wise in programming in c.

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col%2);
        }
        printf("\n");
    }
    return 0;
}

