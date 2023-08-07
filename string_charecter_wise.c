//Print any name or word in string charecter wise in programming in c.

#include<stdio.h>
int main()
{
    char string[100];
    int i=0;
    printf("Enter any string : ");
    gets(string);
    printf("String = \n");
    while(string[i]!='\0')
    {
        printf("%c\n",string[i]);
        i++;
    }
    return 0;
}
