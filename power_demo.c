//Absulate value using function in programming in c.

#include<stdio.h>
int main()
{
    double result,x,y;
    printf("Enter the value of x = ");
    scanf("%lf",&x);
    printf("Enter the value of y = ");
    scanf("%lf",&y);

    result=pow(x,y);
    printf("The value of power is = %lf",result);
    return 0;
}




