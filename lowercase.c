//Lowercase to uppercase using function in programming in c.

#include<stdio.h>
int main()
{
    char upper,lower;
    printf("Enter uppercase latter = ");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("Lowercase latter is = %c",lower);
    return 0;
}



