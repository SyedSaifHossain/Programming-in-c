//Even and odd number in programming in c.

#include<stdio.h>
int main()
{
    int number;
    printf("Enter any nember = ");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
