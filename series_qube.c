/*Print sum of even numbers in series in programming in c.
 1^3+2^3+3^3+.........+n^3.
*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter last number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i*i*i;
    }
    printf("1^3+2^3+3^3+.........+%d^3 = %d",n,sum);
    return 0;
}

