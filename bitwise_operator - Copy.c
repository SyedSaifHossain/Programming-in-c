//Bitwise operator in programming in c.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    c=a&b;
    printf("Result of (&) bitwise operator = %d\n",c);
    c=a|b;
    printf("Result of (|) bitwise operator = %d\n",c);
    c=a^b;
    printf("Result of (^) bitwise operator= %d\n",c);
    return 0;
}
