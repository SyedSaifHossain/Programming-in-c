//Find string length in string using function in programming in c.

#include<stdio.h>
int main()
{
    char string[100];
    int length;
    printf("Enter any string : ");
    gets(string);
    length=strlen(string);
    printf("Length of string = %d",length);
    return 0;
}
