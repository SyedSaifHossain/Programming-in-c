//Swaping of two number without temporery variable in programmign in c.

#include<stdio.h>
int main()
{
    int a=10;
    int b=5;
    a=a-b;
    b=a+b;
    a=b-a;
    printf("Value of a= %d\n",a);
    printf("Value of b= %d",b);
    return 0;
}





