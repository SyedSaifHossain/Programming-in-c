//Linear search in array in programming in c.

#include<stdio.h>
int main()
{
    int number[100],n,i,position=-1;
    printf("How many numbers : ");
    scanf("%d",&n);
    printf("Enter %d number : \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&number[i]);
    }
    printf("%d number is = ",n);
    for(i=0; i<n; i++)
    {
        printf("%d ",number[i]);
    }
    printf("\n");
    printf("Enter the number you want to search : ");
    scanf("%d",&number[i]);
    for(i=0; i<n; i++)
    {
        if(n==number[i])
        {
            position=i+1;
            break;
        }
    }
    if(position=-1)
    {
        printf("Number is not found");
    }
    else
    {
        printf("Number is found and position is %d",position);
    }
    return 0;
}

