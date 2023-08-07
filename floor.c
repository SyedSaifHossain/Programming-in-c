//The value of Function of floor in programming in c.

#include<stdio.h>
#include<math.h>
int main()
{
    double x,result;
    printf("Enter the value of x = ");
    scanf("%lf",&x);
    result=floor(x);
    printf("The value of function of floor(%lf) = %lf",x,result);
    return 0;
}

