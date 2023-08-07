//Capital letter small letter digit using string in programming in c.

#include<stdio.h>
int main()
{
    char string[100];
    int i,capital,small,digit,other;
    printf("Enter any strings : ");
    gets(string);
    i=capital=small=digit=other=0;
    while(string[i]!='\0')
    {
        if(string[i]>=65 && string[i]<=90)
        {
            capital++;
        }
        else if(string[i]>=97 && string[i]<=122)
        {
            small++;
        }
        else if(string[i]>=48 && string[i]<=57)
        {
            digit++;
        }
        else
        {
            other++;
        }
        i++;
    }

    printf("Number of capital letter = %d\n",capital);
    printf("Number of small letter = %d\n",small);
    printf("Number of digit = %d\n",digit);
    printf("Number of other = %d\n",other);
    return 0;
}

