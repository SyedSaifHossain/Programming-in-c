//Centrigrade to fahrenheight temperature conversion in programming in c.

#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter centrigrade temperature = ");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("Fahrenheight temperature is = %.2f",f);
    return 0;
}
