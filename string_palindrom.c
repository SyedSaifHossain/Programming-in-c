//Palindrom in string in programming in c.

#include<stdio.h>
int main()
{
    char string1[100],string2[100];
    int length=0,i=0,j,d;
    printf("Enter any string : ");
    gets(string1);
    while(string1[i]!='\0')
    {
        i++;
        length++;
    }
    for(j=0,i=length-1; i>=0; i--,j++)
    {
        string2[j]=string1[i];
    }
    string2[j]='\0';
    printf("Revers of string = %s\n",string2);
    d=strcmp(string1,string2);
    if(d==0)
    {
        printf("String is Palindrom");
    }
    else
    {
        printf("string is not palindrom");
    }
    return 0;
}
