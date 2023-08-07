//The value of Function of log 10 in programming in c.

#include<stdio.h>
int main()
{
    int x;
    double result;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    result=log10(x);
    printf("The value of function of log10(%d) = %lf",x,result);
    return 0;
}

