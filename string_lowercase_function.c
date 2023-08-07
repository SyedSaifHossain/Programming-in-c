//Lowercase letter of any string in string in programming in c.

#include<stdio.h>
int main()
{
    char string[100];
    printf("Enter any strings : ");
    gets(string);

    strlwr(string);
    printf("Lowercase of string = %s",string);
    return 0;
}


