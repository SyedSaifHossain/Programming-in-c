/*Series of multiplication and sum in programming in c.
1X2+2X3+3X4X.........X +nXn.
*/

#include<stdio.h>
int main()
{
    int n1,n2,a=1,b=2,sum=0;
    printf("Enter last numbers of n1 and n2 : ");
    scanf("%d %d",&n1,&n2);
    while(a<n1 && b<n2)
    {
        sum=sum+a*b;
        a=a+1;
        b=b+1;
    }
    printf("1X2+2X3+3X4+.........+%dX%d = %d",n1,n2,sum);
    return 0;
}
