//Subtraction of number using function different way in programming in c.

#include<stdio.h>
void subtraction(int a,int b)
{
    int result;
    result=a-b;
    printf("Subtraction of value = %d",result);
}
int main()
{
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    subtraction(a,b);
    return 0;
}

