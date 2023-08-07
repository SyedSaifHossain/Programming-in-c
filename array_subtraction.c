//Subtraction number in array in programming in c.

#include<stdio.h>
int main()
{
    int number[100],n,i,result=0;
    printf("How many number : ");
    scanf("%d",&n);
    printf("Enter %d number : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=0; i<n; i++)
    {
        result=result-number[i];
    }
    printf("Subtraction of number = %d",result);
    return 0;
}

