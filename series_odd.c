/*Print sum of odd numbers in series in programming in c.
 1+3+5+.........+nth.
*/

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter last number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+2)
    {
        sum=sum+i;
    }
    printf("1+3+5+.........+%d = %d",n,sum);
    return 0;
}

