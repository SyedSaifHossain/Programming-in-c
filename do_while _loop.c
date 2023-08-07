//Write a program using do while loop and print 1 to n numbers in programming in c.

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
    return 0;
}

