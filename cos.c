//The value of Function of cos in programming in c.

#include<stdio.h>
int main()
{
    int x;
    double result;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    result=cos(x);
    printf("Value of cos(%d) = %lf",x,result);
    return 0;
}

