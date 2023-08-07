//Print exponent of number in function in programming in c.

#include<stdio.h>
double exponent(double b,double exp)
{
    double result=1;
    int i;
    for(i=1; i<=exp; i++)
    {
        result=result*b;
    }
    return result;
}
int main()
{
    double base,exp,result=1;
    printf("Enter base : ");
    scanf("%lf",&base);
    printf("Enter exponent : ");
    scanf("%lf",&exp);
    result=exponent(base,exp);
    printf("Exponent of number = %.2lf",result);
    return 0;
}


