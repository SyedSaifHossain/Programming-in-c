//Conditional operator in programming in c.

#include<stdio.h>
int main()
{
    int number1,number2,large;
    printf("Enter the value of number1 : ");
    scanf("%d",&number1);
    printf("Enter the value of number2 : ");
    scanf("%d",&number2);
    large=number1>number2 ? number1:number2;
    printf("Large number is = %d",large);
    return 0;
}


