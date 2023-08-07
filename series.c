//Print 1 to nth numbers in programmign in c.

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter last number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n",i);
    }

    return 0;
}
