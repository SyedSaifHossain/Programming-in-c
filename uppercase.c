//Lowercase to uppercase using function in programming in c.

#include<stdio.h>
int main()
{
    char upper,lower;
    printf("Enter lowercase latter = ");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("Uppercase latter is = %c",upper);
    return 0;
}



