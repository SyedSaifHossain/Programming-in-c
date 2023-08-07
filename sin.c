//The value of Function of sin in programming in c.

#include<stdio.h>
int main()
{
    int x;
    double result;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    result=sin(x);
    printf("Value of sin(%d) = %lf",x,result);
    return 0;
}

