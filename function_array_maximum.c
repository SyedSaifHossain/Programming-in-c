//Maximum number in function and array in programming in c.

#include<stdio.h>
int maximum(int x[])
{
    int max,i,n;
    printf("How many numbers : ");
    scanf("%d",&n);
    printf("Enter %d number : \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n");
    printf("%d number is = ",n);
    for(i=0; i<n; i++)
    {
        printf("%d ",x[i]);
    }
    printf("\n");
    max=x[0];
    for(i=1; i<n; i++)
    {
        if(max<x[i])
        {
            max=x[i];
        }
    }
    return max;
}
int main()
{
    int number[100],result;
    result=maximum(number);
    printf("Maximum value is = %d",result);
    return 0;
}
