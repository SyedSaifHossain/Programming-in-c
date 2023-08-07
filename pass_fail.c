//Pass and fail in programming in c.

#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark = ");
    scanf("%d",&mark);
    if(mark>100 || mark<0)
    {
        printf("Invalid");
    }
    else if(mark>=33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}

