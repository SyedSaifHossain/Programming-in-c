/*Print sum of even numbers in series in programming in c.
 2+4+6+.........+nth.
*/

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter last number : ");
    scanf("%d",&n);
    for(i=2; i<=n; i=i+2)
    {
        sum=sum+i;
    }
    printf("2+4+6+.........+%d = %d",n,sum);
    return 0;
}
