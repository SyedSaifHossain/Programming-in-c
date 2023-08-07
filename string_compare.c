//Compare string using function in string in programming in c.

#include<stdio.h>
int main()
{
    char string1[100],string2[100];
    int d;
    printf("Enter any string1 : ");
    gets(string1);
    printf("Enter any string2 : ");
    gets(string2);
    d=strcmp(string1,string2);
    if(d==0)
    {
        printf("String are equal");
    }
    else
    {
        printf("String are not equal");
    }
    return 0;
}
