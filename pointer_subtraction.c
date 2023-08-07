//Subtraction of two number in pointer in programming in c.

#include<stdio.h>
int main()
{
    int x,y,subtraction;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    subtraction=*ptr1-*ptr2;
    printf("Subtraction of two number is = %d",subtraction);
    return 0;
}

