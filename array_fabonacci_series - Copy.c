//Fabonacci series in array in programming in c.

#include<stdio.h>
int main()
{
    int fabonacci[100],n,i;
    printf("How many numbers : ");
    scanf("%d",&n);
    fabonacci[0]=0;
    fabonacci[1]=1;
    for(i=2; i<n; i++)
    {
        fabonacci[i]=fabonacci[i-2]+fabonacci[i-1];
    }
    printf("Fabonacci series numbers = ");
    for(i=0; i<n; i++)
    {
        printf("%d ",fabonacci[i]);
    }
    return 0;
}

