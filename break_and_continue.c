//Break and continue statement in programming in c.

#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<50; i++)
    {
        if(i%3==0)
        {
            printf("%d\n",i);
            continue;
        }
        if(i==31)
        {
            break;
        }
    }
    return 0;
}
