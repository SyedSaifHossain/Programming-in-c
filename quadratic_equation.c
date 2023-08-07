//Find out the value using quadratic equation in programming in c.

#include<stdio.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("Enter the value of a = ");
    scanf("%f",&a);
    printf("Enter the value of b = ");
    scanf("%f",&b);
    printf("Enter the value of c = ");
    scanf("%f",&c);
    d=sqrt(b*b-4*a*c);
    x1=(-b-d)/2*a;
    x2=(-b+d)/2*a;
    printf("The value of x1 is = %.2f\n",x1);
    printf("The value of x2 is = %f",x2);
    return 0;
}

