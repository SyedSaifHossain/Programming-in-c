//Print small charecter in square pattern column wise in programming in c.

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
            printf("%c",col+96);
        }
        printf("\n");
    }
    return 0;
}


