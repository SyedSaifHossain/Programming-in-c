//Using assignment operator write a program in programming in c.

#include<stdio.h>
int main()
{
    int a,b,result;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    result=(a+=b);
    printf("The result is (a+=b) = %d\n",result);
    result=(a-=b);
    printf("The result is (a-=b) = %d\n",result);
    result=(a*=b);
    printf("The result is (a*=b) = %d\n",result);
    result=(a/=b);
    printf("The result is (a/=b) = %d\n",result);
    result=(a%=b);
    printf("The result is (a(%)=b) = %d\n",result);
    return 0;
}
