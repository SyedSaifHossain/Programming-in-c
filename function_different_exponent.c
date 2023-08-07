//Print exponent of number in function different way programming in c.

#include<stdio.h>
void exponent(double b,double exp)
{
    double result=1;
    int i;
    for(i=1; i<=exp; i++)
    {
        result=result*b;
    }
    printf("Exponent of number = %.2lf",result);
}
int main()
{
    double base,exp;
    printf("Enter base : ");
    scanf("%lf",&base);
    printf("Enter exponent : ");
    scanf("%lf",&exp);
    exponent(base,exp);
    return 0;
}

