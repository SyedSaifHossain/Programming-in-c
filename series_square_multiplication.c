/*Multiplication of square in series in programming in c.
 1^2 X 2^2 X 3^2 X .........X n^2.
*/

#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter last number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        result=result*i*i;
    }
    printf("1^2 X 2^2 X 3^2 X .........X %d^2 = %d",n,result);
    return 0;
}
