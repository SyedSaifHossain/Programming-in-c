//Write a program using while loop and print 1 to n numbers in this while loop in programming in c.

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
