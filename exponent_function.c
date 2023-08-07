//Print exponent of number using function in programming in c.

#include<stdio.h>
int main()
{
    double base,exp,result=1;
    int i;
    printf("Enter base : ");
    scanf("%lf",&base);
    printf("Enter exponent : ");
    scanf("%lf",&exp);
    result=pow(base,exp);
    printf("Exponent of number = %.2lf",result);
    return 0;
}


