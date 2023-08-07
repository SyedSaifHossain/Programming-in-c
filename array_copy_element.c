//Copy element in array in programming in c.

#include<stdio.h>
int main()
{
    int Array1[100],Array2[100],n,i;
    printf("How many number : ");
    scanf("%d",&n);
    printf("Enter %d number for array1 : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&Array1[i]);
    }
    printf("Array1 = ");
    for(i=0; i<n; i++)
    {
        printf("%d ",Array1[i]);
    }
    printf("\n");
    printf("Array2 = ");
    for(i=0; i<n; i++)
    {
        Array2[i]=Array1[i];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",Array2[i]);
    }
    return 0;
}
