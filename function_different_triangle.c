//Area of triangle using function different way in programming in c.

#include<stdio.h>
void triangle(double b,double h)
{
    double area;
    area=0.5*b*h;
    printf("Area of triangle = %.2lf",area);
}
int main()
{
    double base,height;
    printf("Enter the value of base : ");
    scanf("%lf",&base);
    printf("Enter the value of height : ");
    scanf("%lf",&height);
    triangle(base,height);
    return 0;
}

