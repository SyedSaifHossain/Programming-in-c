//Check your grade letter in programming in c.

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
    else if(mark>=80 && mark<=100)
    {
        printf("Your grade is = A+");
    }
    else if(mark>=70 && mark<=79)
    {
        printf("Your grade is = A");
    }
    else if(mark>=60 && mark<=69)
    {
        printf("Your grade is = A-");
    }
    else if(mark>=50 && mark<=59)
    {
        printf("Your grade is = B+");
    }
    else if(mark>=40 && mark<=49)
    {
        printf("Your grade is = C");
    }
    else if(mark>=33 && mark<=39)
    {
        printf("Your grade is = D");
    }
    else
    {
        printf("You are fail");
    }
    return 0;
}

