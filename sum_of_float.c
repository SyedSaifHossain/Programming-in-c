/*Print sum of float numbers in series in programming in c.
 1.5+2.5+3.5+.........+nth.
*/
#include<stdio.h>
int main()
{
    float n,i,sum=0;
    printf("Enter last number : ");
    scanf("%f",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("1.5+2.5+3.5+.........+%.1f = %.1f",n,sum);
    return 0;
}

