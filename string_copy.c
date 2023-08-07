//Copy any string using function in programming in c.

#include<stdio.h>
int main()
{
    char string1[100],string2[100];
    printf("Enter any string1 : ");
    gets(string1);
    strcpy(string2,string1);
    printf("String1 = %s\n",string1);
    printf("String2 = %s",string2);
    return 0;
}
