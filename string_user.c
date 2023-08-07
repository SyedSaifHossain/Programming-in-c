//Print your name or word in string in programming in c.

#include<stdio.h>
int main()
{
    char string[100];
    printf("Enter your name : ");
    gets(string);
    printf("Your name is = %s",string);
    return 0;
}

