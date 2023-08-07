//Print natural number floyd triangle in pattern in programming in c.

#include<stdio.h>
int main()
{
    int n,row,col,count=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",++count);
        }
        printf("\n");
    }
    return 0;
}
