//Addition of number using function different way in programming in c.

#include<stdio.h>
void addition(int a,int b)
{
    int result;
    result=a+b;
    printf("Addition of value = %d",result);
}
int main()
{
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    addition(a,b);
    return 0;
}

