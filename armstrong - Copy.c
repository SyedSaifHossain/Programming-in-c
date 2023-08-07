//Find armstrong number in programming in c.

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
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(sum==number)
    {
        printf("%d is armstrong",number);
    }
    else
    {
        printf("%d is not armstrong",number);
    }
    return 0;
}



