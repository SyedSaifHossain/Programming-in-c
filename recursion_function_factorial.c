//Factorial number in recursion function in programming in c.

#include<stdio.h>
int main()
{
    int result,n,x;
    printf("Enter any number : ");
    scanf("%d",&x);
    result=fact(x);
    printf("Factorial number is = %d",result);
    return 0;
}
int fact(n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

