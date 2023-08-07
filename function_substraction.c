//Subtraction of number using function in programming in c.

#include<stdio.h>
int subtraction(int a,int b)
{
    return a-b;
}
int main()
{
    int a,b,result;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    result=subtraction(a,b);
    printf("Subtraction of value = %d",result);
    return 0;
}

