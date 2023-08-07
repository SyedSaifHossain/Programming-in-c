//Maximum number in array in programming in c.

#include<stdio.h>
int main()
{
    int number[100],n,i,max;
    printf("How many numbers : ");
    scanf("%d",&n);
    printf("Enter %d number : \n",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&number[i]);
    }
    max=number[0];
    for(i=1; i<n; i++)
    {
        if(max<number[i])
        {
            max=number[i];
        }
    }
    printf("Maximum number is = %d",max);
    return 0;
}

