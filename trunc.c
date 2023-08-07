//The value of Function of trunc in programming in c.

#include<stdio.h>
#include<math.h>
int main()
{
    double x,result;
    printf("Enter the value of x = ");
    scanf("%lf",&x);
    result=trunc(x);
    printf("Value of trunc(%lf) = %lf",x,result);
    return 0;
}

