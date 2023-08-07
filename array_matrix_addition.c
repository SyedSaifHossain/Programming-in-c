//Addition of two matrix in array in programming in c.

#include<stdio.h>
int main()
{
    int A[100][100],B[100][100],result[100][100],i,j,row,col;
    printf("Enter row numbers : ");
    scanf("%d",&row);
    printf("Enter column numbers : ");
    scanf("%d",&col);
    printf("Enter %d rows and %d column : \n",row,col);
    printf("Enter value for matrix A : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
          printf("A [%d][%d] = ",i,j);
          scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix A = \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
          printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter value for matrix B : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
           printf("B [%d][%d] = ",i,j);
           scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B = \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
           printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            result[i][j] = A[i][j]+B[i][j];
        }
    }
    printf("A + B = \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
