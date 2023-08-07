//Array in pointer in programming in c.

#include<stdio.h>
int main()
{
    int number[100],n,i;
    int *ptr;
    ptr=&number[0];
    printf("How many numbers : ");
    scanf("%d",&n);
    printf("Enter %d number : \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&number[i]);
    }
    printf("\n");

    printf("%d number is = ",n);
    for(i=0; i<n; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}

