//Print exponent of number in programming in c.

#include<stdio.h>
int main()
{
    double base,exp,result=1;
    int i;
    printf("Enter base : ");
    scanf("%lf",&base);
    printf("Enter exponent : ");
    scanf("%lf",&exp);
    for(i=1; i<=exp; i++)
    {
        result=result*base;
    }
    printf("Exponent of number = %.2lf",result);
    return 0;
}
