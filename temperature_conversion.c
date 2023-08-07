//Temperature conversion using switch in programming in c.

#include<stdio.h>
int main()
{
    int choise;
    float c,f;
    printf("Temperature conversion menu \n");
    printf("1.For celcius to fahrenheight conversion\n");
    printf("1.For fahrenheight to celcius conversion\n");
    printf("Select your option : ");
    scanf("%d",&choise);
    switch(choise)
    {
    case 1:
        {
            printf("Enter celcius temperature : ");
            scanf("%f",&c);
            f=(1.8*c)+32;
            printf("Fahrenheight temperature is : %f",f);
            break;
        }
     case 2:
        {
            printf("Enter fahrenheight temperature : ");
            scanf("%f",&f);
            c=(f-32)/1.8;
            printf("Celcius temperature is : %.2f",c);
            break;
        }
     default:
        {
            printf("You have pressed invalid option");
        }

    }
    return 0;
}
