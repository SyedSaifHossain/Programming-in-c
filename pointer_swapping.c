//Swapping of two number in pointer in programming in c.

#include<stdio.h>
int main()
{
    int x,y,temp;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);

    printf("Before swapping : \n");
    printf("Value of x = %d\n",*ptr1);
    printf("Value of y = %d\n",*ptr2);

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("After swapping : \n");
    printf("Value of x = %d\n",*ptr1);
    printf("Value of y = %d\n",*ptr2);
    return 0;
}


