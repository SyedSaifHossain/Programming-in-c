//Print oposite floyd triangle capital charecter in pattern print column wise in programming in c.

#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c",col+64);
        }
        printf("\n");
    }
    return 0;
}
