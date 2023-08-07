//Transpose matrix in array in programming in c.

#include<stdio.h>
int main()
{
    int transpose[100][100],A[100][100],n,i,j,row,col;
    printf("Enter row numbers : ");
    scanf("%d",&row);
    printf("Enter column numbers : ");
    scanf("%d",&col);
    printf("Enter %d row and %d column : \n",row,col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A [%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("A matrix = \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
           transpose[j][i]=A[i][j];
        }
    }
    printf("Transpose matrix = \n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
           printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}


