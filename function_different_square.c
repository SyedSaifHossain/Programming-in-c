//Square of number using function different way in programming in c.

#include<stdio.h>
void square(int a)
{
    int result;
    result=a*a;
    printf("Square of value = %d",result);
}

int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    square(a);
    return 0;
}

