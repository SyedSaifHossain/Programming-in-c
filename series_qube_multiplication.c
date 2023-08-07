/*Multiplication of square in series in programming in c.
 1^3 X 2^3 X 3^3 X .........X n^3.
*/

#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter last number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        result=result*i*i*i;
    }
    printf("1^3 X 2^3 X 3^3 X .........X %d^3 = %d",n,result);
    return 0;
}

