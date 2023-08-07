//Find prime number in programming in c.

#include<stdio.h>
int main()
{
    int number,i,count=0;
    printf("Enter any number : ");
    scanf("%d",&number);
    for(i=2; i<number; i++)
    {
        if(number%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("Prime number = %d",number);
    }
    else
    {
        printf("Not prime number = %d",number);
    }

    return 0;
}
