/*Multiplication of odd numbers in series in programming in c.
 1X3X5X.........X n.
*/

#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter last number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+2)
    {
        result=result*i;
    }
    printf("1X3X5X.........X%d = %d",n,result);
    return 0;
}

