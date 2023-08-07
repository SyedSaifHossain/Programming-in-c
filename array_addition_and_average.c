//Addition and average in array in programming in c.

#include<stdio.h>
int main()
{
    int number[100],sum=0,i,n;
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
    printf("Sum of number = %d\n",sum);
    printf("Average of number = %.2f",(float)sum/n);
    return 0;
}

