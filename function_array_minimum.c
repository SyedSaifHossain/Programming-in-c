//Minimum number in function and array in programming in c.

#include<stdio.h>
int minimum(int x[])
{
    int min,i,n;
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
    min=x[0];
    for(i=1; i<n; i++)
    {
        if(min>x[i])
        {
            min=x[i];
        }
    }
    return min;
}
int main()
{
    int number[100],result;
    result=minimum(number);
    printf("Minimum value is = %d",result);
    return 0;
}

