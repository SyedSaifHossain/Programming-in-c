//Multiplication table for multiple time of any number using for loop and while in programming in c.

#include<stdio.h>
int main()
{
    while(1)
    {
    int number,i;
    printf("Enter any number : ");
    scanf("%d",&number);
    for(i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n",number,i,number*i);
    }
    }
    return 0;
}

