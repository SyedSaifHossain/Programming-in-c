//Union in programming in c.

#include<stdio.h>
union test
{
    int x,y;
};
int main()
{
    union test t1;
    printf("Enter the value of x : ");
    scanf("%d",&t1.x);
    printf("The value of x is = %d\n",t1.x);
    printf("The value of y is = %d\n",t1.y);

    printf("Enter the value of y : ");
    scanf("%d",&t1.y);
    printf("The value of y is = %d\n",t1.y);
    printf("The value of x is = %d",t1.x);
    return 0;
}
