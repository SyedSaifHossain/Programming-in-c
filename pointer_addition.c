//Addition of two number in pointer in programming in c.

#include<stdio.h>
int main()
{
    int x,y,addition;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    addition=*ptr1+*ptr2;
    printf("Addition of two number is = %d",addition);
    return 0;
}
