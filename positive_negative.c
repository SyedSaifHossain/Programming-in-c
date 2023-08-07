//Positive and negative number in programming in c.

#include<stdio.h>
int main()
{
    int number;
    printf("Enter any nember = ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("Positive Number");
    }
    else if(number<0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}

