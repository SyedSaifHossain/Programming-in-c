//Concatenation without using function in string in programming in c.

#include<stdio.h>
int main()
{
    char string1[100],string2[100];
    int i=0,length=0,j=0;

    printf("Enter strings for string1 : ");
    gets(string1);
    printf("Enter strings for string2 : ");
    gets(string2);

    printf("String1 = %s\n",string1);
    printf("String2 = %s\n",string2);

    while(string1[i]!='\0')
    {
        i++;
        length++;
    }
    while(string1[j]!='\0')
    {
        string1[length+j]=string2[j];
        j++;
    }
    printf("Concatenation of string = %s",string1);
    return 0;
}





