//Addition of number using function in programming in c.

#include<stdio.h>
int addition(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,result;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    result=addition(a,b);
    printf("Addition of value = %d",result);
    return 0;
}
