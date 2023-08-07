//Minimum number in array in programming in c.

#include<stdio.h>
int main()
{
    int number[100],n,i,min;
    printf("How many numbers : ");
    scanf("%d",&n);
    printf("Enter %d number : \n",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&number[i]);
    }
    min=number[0];
    for(i=1; i<n; i++)
    {
        if(min>number[i])
        {
            min=number[i];
        }
    }
    printf("Minimum number is = %d",min);
    return 0;
}


