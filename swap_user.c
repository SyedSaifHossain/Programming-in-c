//Swaping of two number taking the value by user in programmign in c.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the vlaue of a = ");
    scanf("%d",&a);
    printf("Enter the vlaue of b = ");
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("Value of a= %d\n",a);
    printf("Value of b= %d",b);
    return 0;
}






