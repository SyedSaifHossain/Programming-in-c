//Swapping in string in programming in c.

#include<stdio.h>
int main()
{
    char string1[100],string2[100],temp[100];
    printf("Enter any strings for string1: ");
    gets(string1);
    printf("Enter any strings for string2: ");
    gets(string2);
    printf("Before swapping string\n");
    printf("string1 = %s\n",string1);
    printf("string2 = %s\n",string2);
    strcpy(temp,string1);
    strcpy(string1,string2);
    strcpy(string2,temp);
    printf("After swapping string\n");
    printf("String1 = %s\n",string1);
    printf("String2 = %s\n",string2);
    return 0;
}


