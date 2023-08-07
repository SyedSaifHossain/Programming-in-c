//Palimdrom of any integer number digit in programming in c.

#include<stdio.h>
int main()
{
    int sum=0,number,rem,temp;
    printf("Enter any number : ");
    scanf("%d",&number);
    temp=number;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(number==sum)
    {
    printf("%d is palimdrom",sum);
    }
    else
    {
        printf("%d is not palimdrom",sum);
    }
    return 0;
}



