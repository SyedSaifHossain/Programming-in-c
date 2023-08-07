//Small lattar and greater lattar in programming in c.

#include<stdio.h>
int main()
{
    char lattar;
    printf("Enter any lattar = ");
    scanf("%c",&lattar);
    if(lattar>='A' && lattar<='Z')
    {
        printf("Lattar is greater");
    }
    else if(lattar>='a' && lattar<='z')
    {
        printf("Lattar is small");
    }
    else
    {
        printf("Not a lattar");
    }
    return 0;
}


