//Print any letter in function using string character wise in programming in c.

#include<stdio.h>
int display(char x[])
{
    int i=0,show;
    while(x[i]!='\0')
    {
        printf("%c\n",x[i]);
        i++;
    }
    return show;
}

int main()
{
    char string[100];
    int show;
    printf("Enter any strings : ");
    gets(string);
    show=display(string);
    return 0;
}
