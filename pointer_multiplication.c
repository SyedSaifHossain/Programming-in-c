//Multiplication of two number in pointer in programming in c.

#include<stdio.h>
int main()
{
    int x,y,multiplication;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    multiplication=*ptr1 * *ptr2;
    printf("Multiplication of two number is = %d",multiplication);
    return 0;
}

