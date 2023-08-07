//Find and print strong numbers in programming in c.

#include<stdio.h>
int main()
{
    int number,temp,rem,sum=0,fact,i;
    printf("Enter any number : ");
    scanf("%d",&number);
    temp=number;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=1; i<=rem; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==number)
    {
        printf("%d is strong number",number);
    }
    else
    {
        printf("%d is not strong number",number);
    }
}

