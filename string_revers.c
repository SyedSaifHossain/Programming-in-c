//Revers any string in string in programming in c.

#include<stdio.h>
int main()
{
    char string1[100],string2[100];
    int i=0,length=0,j;
    printf("Enter any string : ");
    gets(string1);
    printf("Before revers = %s\n",string1);

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
     printf("After revers \n");
     printf("Revers of string = %s",string2);
    return 0;
}

