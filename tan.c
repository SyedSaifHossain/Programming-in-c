//The value of Function of tan in programming in c.

#include<stdio.h>
int main()
{
    int x;
    double result;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    result=tan(x);
    printf("Value of tan(%d) = %lf",x,result);
    return 0;
}

