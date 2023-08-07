//point in programming in c.

#include<stdio.h>
int main()
{
    int x;
    int *ptr;
    ptr=&x;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Value of x = %d\n",x);
    printf("Address of x = %d\n",&x);
    printf("positive address of x = %u\n",&x);
    printf("Value of ptr = %d\n",*ptr);
    printf("Address of ptr = %d\n",&ptr);
    return 0;
}
