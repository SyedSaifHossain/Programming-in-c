//Upper sum and lower sum of diagonal in matrix in array in programming in c.

#include<stdio.h>
int main()
{
    int A[100][100],i,j,row,col,uppersum=0,lowersum=0;
    printf("Enter number of rows for diagonal matrix : ");
    scanf("%d",&row);
    printf("Enter number of columns for diagonal matrix : ");
    scanf("%d",&col);
    while(col!=row)
    {
        printf("Error !!! \n");
        printf("Rows and column are not equal for diagonal matrix \n");
        printf("Enter row and column agian \n");
        printf("Enter number of rows for diagonal matrix : ");
        scanf("%d",&row);
        printf("Enter number of columns for diagonal matrix : ");
        scanf("%d",&col);
    }
    printf("Enter value for diagonal matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A [%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal matrix = \n");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i<j)
            {
                uppersum=uppersum+A[i][j];
            }
            if(i>j)
            {
                lowersum=lowersum+A[i][j];
            }
        }
    }
    printf("Upper sum of diagonal is = %d\n",uppersum);
    printf("Lower sum of diagonal is = %d",lowersum);

    return 0;
}


