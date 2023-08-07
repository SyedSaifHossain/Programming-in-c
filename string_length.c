//Find out string length without using function in string in programming in c.

#include<stdio.h>
int main()
{
    char string[100];
    int i=0,length=0;
    printf("Enter any string : ");
    gets(string);
    printf("String = %s\n",string);
    while(string[i]!='\0')
    {
        i++;
        length++;
    }
    printf("Length of string = %d",length);
    return 0;
}
