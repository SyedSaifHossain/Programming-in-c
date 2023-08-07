//Diagonal matrix in array in programming in c.

#include<stdio.h>
int main()
{
    int A[100][100],row,col,i,j,sum=0;
    printf("Enter row numbers : ");
    scanf("%d",&row);
    printf("Enter column numbers : ");
    scanf("%d",&col);
    printf("Enter %d rows and %d column : \n",row,col);
    while(col!=row)
    {
        printf("Error !!! please enter rows and column agian\n");
        printf("Row and column are not equal\n");
        printf("Enter row numbers : ");
        scanf("%d",&row);
        printf("Enter column numbers : ");
        scanf("%d",&col);
        printf("Enter %d rows and %d column : \n",row,col);
    }
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
    printf("Diagonal matrix = ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
                sum=sum+A[i][j];
            }
        }
    }
    printf("\n");
    printf("Sum of diagonal = %d",sum);
    return 0;
}
