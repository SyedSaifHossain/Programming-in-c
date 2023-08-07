//Using assignment operator find out any value in programming in c.

#include<stdio.h>
int main()
{
    int a,b,result;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    result=a+=b;
    printf("The result is = %d + = %d = %d\n",a,b,result);

    result=a-=b;
    printf("The result is = %d - = %d = %d\n",a,b,result);

    result=a*=b;
    printf("The result is = %d * = %d = %d\n",a,b,result);

    result=a/=b;
    printf("The result is = %d / = %d = %d\n",a,b,result);

    result=a%=b;
    printf("The result is = %d % = %d = %d\n",a,b,result);
    return 0;
}

