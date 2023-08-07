//Area of triangle using function in programming in c.

#include<stdio.h>
double triangle(double b,double h)
{
    return 0.5*b*h;
}
int main()
{
    double base,height,area;
    printf("Enter the value of base : ");
    scanf("%lf",&base);
    printf("Enter the value of height : ");
    scanf("%lf",&height);
    area=triangle(base,height);
    printf("Area of triangle = %.2lf",area);
    return 0;
}

