// print total prime number in programming in c.

#include<stdio.h>

int main()
{
    int m,n,count=0,i,j,totalPrime=0;
    printf("Enter initial number : ");
    scanf("%d",&m);
    printf("Enter end number : ");
    scanf("%d",&n);
    for(i=m; i<=n; i++)
    {
        for(j=2; j<=i-1; j++)
        {
            if(i%j == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0)
        {
            printf("%d\n",i);
            totalPrime++;
        }
        count=0;
    }
    printf("Total prime number = %d",totalPrime);

    return 0;
}


