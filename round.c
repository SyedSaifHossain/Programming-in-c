//The value of Function of round in programming in c.

#include<stdio.h>
int main()
{
    double x,result;
    printf("Enter the value of x = ");
    scanf("%lf",&x);
    result=round(x);
    printf("Value of round(%lf) = %lf",x,result);
    return 0;
}

