//Large number among three number in programming in c.

#include<stdio.h>
int main()
{
    int number1,number2,number3;
    printf("Enter any nember1 = ");
    scanf("%d",&number1);
    printf("Enter any nember2 = ");
    scanf("%d",&number2);
    printf("Enter any nember3 = ");
    scanf("%d",&number3);
    if(number1>number2 && number1>number3)
    {
        printf("Number1 is large");
    }
    else if(number2>number1 && number2>number3)
    {
        printf("Number2 is large");
    }
    else if(number3>number1 && number3>number2)
    {
        printf("Number3 is large");
    }
    else
    {
        printf("Numbers are equal");
    }
    return 0;
}


