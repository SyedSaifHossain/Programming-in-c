//string revers in string using function in programming in c.

#include<stdio.h>
int main()
{
    char string[100];
    printf("Enter any string : ");
    gets(string);
    printf("Before revers = %s\n",string);

    strrev(string);
    printf("After revers \n");
    printf("Revers of string = %s\n",string);
    return 0;
}

