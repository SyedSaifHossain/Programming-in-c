//Print good morning using condition operator in programming in c.

#include<stdio.h>
int main()
{
    int time;
    printf("Enter any time : ");
    scanf("%d",&time);
    if(time>=0 && time<=11)
    {
        printf("Good morning");
    }
    else if(time<0 || time>12)
    {
        printf("Invalid time");
    }
    else
    {
        printf("Not good morning");
    }
    return 0;
}
