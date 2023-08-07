//Fahrenheight to centrigrade temperature conversion in programming in c.

#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter fahrenheight temperature = ");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("Centrigrade temperature is = %.2f",c);
    return 0;
}

