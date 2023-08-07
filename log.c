//The value of Function of log in programming in c.

#include<stdio.h>
int main()
{
    int x;
    double result;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    result=log(x);
    printf("The value of function of log(%d) = %lf",x,result);
    return 0;
}

