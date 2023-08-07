//Print maximum number in function and array different way in programming in c.

#include<stdio.h>
void maximum(int x[])
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
    printf("Maximum value is = %d",max);
}
int main()
{
    int number[100];
    maximum(number);
    return 0;
}


