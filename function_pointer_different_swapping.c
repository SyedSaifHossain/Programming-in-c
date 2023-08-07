//Swapping of any two number in function different way using pointer in programming in c.

#include<stdio.h>
void swapping(int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("After swapping : \n");
    printf("Value of x = %d\n",*ptr1);
    printf("Value of y = %d\n",*ptr2);
}
int main()
{
    int x,y;
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
    swapping(&x,&y);
    return 0;
}






