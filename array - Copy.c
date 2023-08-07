//Print number in array in programming in c.

#include<stdio.h>
int main()
{
    int number[100];
    int i,n;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=1; i<=n; i++)
    {
        printf("Number = %d\n",number[i]);
    }
    return 0;
}
