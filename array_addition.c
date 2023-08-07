//Addition number in array in programming in c.

#include<stdio.h>
int main()
{
    int number[100],n,i,sum=0;
    printf("How many number : ");
    scanf("%d",&n);
    printf("Enter %d number : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+number[i];
    }
    printf("Sum of number = %d",sum);
    return 0;
}
