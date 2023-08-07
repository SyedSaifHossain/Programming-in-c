//Large number between two number in programming in c.

#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Enter any nember1 = ");
    scanf("%d",&number1);
    printf("Enter any nember2 = ");
    scanf("%d",&number2);
    if(number1>number2)
    {
        printf("Number1 is large");
    }
    else if(number2>number1)
    {
        printf("Number2 is large");
    }
    else
    {
        printf("Numbers are equal");
    }
    return 0;
}

