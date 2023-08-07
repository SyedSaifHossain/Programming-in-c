//Count of digit in programming in c.

#include<stdio.h>
int main()
{
    int number,count=0;
    printf("Enter any numbers : ");
    scanf("%d",&number);
    while(number!=0)
    {
        number=number/10;
        ++count;
    }
    printf("Count of digit = %d",count);
    return 0;
}
