//Square of number using function in programming in c.

#include<stdio.h>
int square(int a)
{
    return a*a;
}

int main()
{
    int a,result;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    result=square(a);
    printf("Square of value = %d",result);
    return 0;
}

