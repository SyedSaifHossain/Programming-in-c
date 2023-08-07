/*Multiplication of even numbers in series in programming in c.
 2X4X6X.........X n.
*/

#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter last number : ");
    scanf("%d",&n);
    for(i=2; i<=n; i=i+2)
    {
        result=result*i;
    }
    printf("2X4X6X.........X%d = %d",n,result);
    return 0;
}
