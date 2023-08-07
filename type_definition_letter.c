//Print any letter using type definition in programming in c.

#include<stdio.h>
int main()
{
    typedef char letter;
    letter ch1,ch2,ch3;
    ch1='A';
    ch2='B';
    ch3='C';
    printf("Letter = %c\n",ch1);
    printf("Letter = %c\n",ch2);
    printf("Letter = %c\n",ch3);
    return 0;
}

