//Multiplication in matrix in array in programming in c.

#include<stdio.h>
int main()
{
    int first[100][100],second[100][100],result[100][100],i,j,k,r1,r2,c1,c2,sum=0;
    printf("Enter row and column for first matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and column for second matrix : ");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Error !!! \n");
        printf("Column of first matrix are not equal of row of second matrix \n");
        printf("Enter row and column agian \n");
        printf("Enter row and column for first matrix : ");
        scanf("%d %d",&r1,&c1);
        printf("Enter row and column for second matrix : ");
        scanf("%d %d",&r2,&c2);
    }
    printf("Enter rows and column for first matrix : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first [%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }
    printf("First matrix = \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    printf("Enter rows and column for second matrix : \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second [%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }
    printf("second matrix = \n");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    printf("Multiplication of first matrix and second matrix = \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
