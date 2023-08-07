//Calculate two number using switch in programming in c.

#include<stdio.h>
int main()
{
    int number1,number2;
    char select;
    printf("Calculate two number using operator \n");
    printf("Select an operator (+,-,*,/,%)\n");
    printf("Enter any operator : ");
    scanf("%c",&select);
    switch(select)
    {
    case '+':
        {
            printf("Enter number1 : ");
            scanf("%d",&number1);
            printf("Enter number2 : ");
            scanf("%d",&number2);
            printf("%d + %d = %d\n",number1,number2,number1+number2);
            break;
        }
     case '-':
        {
            printf("Enter number1 : ");
            scanf("%d",&number1);
            printf("Enter number2 : ");
            scanf("%d",&number2);
            printf("%d - %d = %d\n",number1,number2,number1-number2);
            break;
        }
     case '*':
        {
            printf("Enter number1 : ");
            scanf("%d",&number1);
            printf("Enter number2 : ");
            scanf("%d",&number2);
            printf("%d * %d = %d\n",number1,number2,number1*number2);
            break;
        }
     case '/':
        {
            printf("Enter number1 : ");
            scanf("%d",&number1);
            printf("Enter number2 : ");
            scanf("%d",&number2);
            printf("%d / %d = %d\n",number1,number2,number1/number2);
            break;
        }
     case '%':
        {
            printf("Enter number1 : ");
            scanf("%d",&number1);
            printf("Enter number2 : ");
            scanf("%d",&number2);
            printf("(%d) % (%d) = %d\n",number1,number2,number1%number2);
            break;
        }

     default:
        {
            printf("You have pressed invalid operator");
        }

    }
    return 0;
}

