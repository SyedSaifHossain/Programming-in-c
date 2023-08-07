//Vowel and consonant in programming in c.

#include<stdio.h>
int main()
{
    char lattar;
    printf("Enter any lattar = ");
    scanf("%c",&lattar);
    if(lattar=='A' || lattar=='E' || lattar=='I' || lattar=='O' || lattar=='U' || lattar=='a' || lattar=='e' || lattar=='i' || lattar=='o' || lattar=='u')
    {
        printf("Lattar is vowel");
    }
    else
    {
        printf("Lattar is consonant");
    }
    return 0;
}


