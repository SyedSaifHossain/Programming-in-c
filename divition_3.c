//Divition and average of three number in programming in c.

#include<stdio.h>
int main()
{
    int number1,number2,number3,result;
    float average;
    printf("Enter the value of number1 = ");
    scanf("%d",&number1);
    printf("Enter the value of number2 = ");
    scanf("%d",&number2);
    printf("Enter the value of number3 = ");
    scanf("%d",&number3);

    result=number1/number2/number3;
    average=(number1/number2/number3)/3;
    printf("Divition of three number is = %d\n",result);
    printf("Average of three number is = %.2f",average);
    return 0;
}

