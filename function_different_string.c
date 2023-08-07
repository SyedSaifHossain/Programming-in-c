//String character wise in function using string different way in programming in c.

#include<stdio.h>
void display(char x[])
{
    int i=0;
    while(x[i]!='\0')
    {
        printf("%c\n",x[i]);
        i++;
    }
}
int main()
{
    char string[100];
    printf("Enter any strings : ");
    gets(string);
    display(string);
    return 0;
}
