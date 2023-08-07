//Print number in square pattern row wise in programming in c.

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
            printf("%d",row);
        }
        printf("\n");
    }
    return 0;
}


