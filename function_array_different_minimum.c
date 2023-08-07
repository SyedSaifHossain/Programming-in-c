//Print minimum number in function and array different way in programming in c.

#include<stdio.h>
void minimum(int x[])
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
    printf("Minimum value is = %d",min);
}

int main()
{
    int number[100];
    minimum(number);
    return 0;
}

