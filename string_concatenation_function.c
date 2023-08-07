//string concatenation in string using function in programming in c.

#include<stdio.h>
int main()
{
    char string1[100],string2[100];
    printf("Enter string1 : ");
    gets(string1);
    printf("Enter string2 : ");
    gets(string2);
    printf("String1 = %s\n",string1);
    printf("String2 = %s\n",string2);

    strcat(string1,string2);
    printf("Concatenation of string = %s\n",string1);
    return 0;
}

