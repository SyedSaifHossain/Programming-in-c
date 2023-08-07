//Find gcd and lcm of two number in programming in c.

#include<stdio.h>
int main()
{
    int gcd,lcm,number1,number2,n1,n2,rem;
    printf("Enter the vlue of number1: ");
    scanf("%d",&number1);
    printf("Enter the vlue of number2: ");
    scanf("%d",&number2);
    n1=number1;
    n2=number2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(number1*number2)/gcd;
    printf("Value of GCD = %d\n",gcd);
    printf("Value of LCM = %d\n",lcm);
    return 0;
}


