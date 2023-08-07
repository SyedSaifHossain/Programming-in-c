/*Division of numbers in series in programming in c.
 1+1/2+1/3+.........+1/n.
*/

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+(1/i);
        if(i==1)
        {
            printf("1+");
        }
        else if(i==n)
        {
            printf("1/%d",i);
        }
        else
        {
            printf("1/%d+",i);
        }
    }
    printf("= %d",sum);
    return 0;
}

