//How to find out area of triangle in programmign in c.

#include<stdio.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter the value of a = ");
    scanf("%f",&a);
    printf("Enter the value of b = ");
    scanf("%f",&b);
    printf("Enter the value of c = ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle = %f",area);
    return 0;
}



