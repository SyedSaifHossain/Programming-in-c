//Write a program using goto statement in programming in c.

#include<stdio.h>
int main()
{
    int i=1,number;
    printf("Enter any number : ");
    scanf("%d",&number);
    ahead:
        {
            printf("%d\t",i);
            i++;
        }
        if(i<=number)
        {
            goto ahead;
        }
        return 0;
}

