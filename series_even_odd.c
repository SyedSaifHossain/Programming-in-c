/*Print subraction of number and sum of total number in series in programming in c.
 1-2+3-4+5-6+.........+odd-even.
*/

#include<stdio.h>
int main()
{
    int n,sum=0,even=0,odd=0,i;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            even=even+i;
        }
        else
        {
           odd=odd+i;
        }
    }
    printf("Sum of even number and odd number = %d",odd-even);
}
