//Information of person in structure using array in programming in c.

#include<stdio.h>
struct Person
{
    char name[100];
    int age;
    float salary;
};
int main()
{
    struct Person person[100];
    int i,n;
    printf("How many information for person : ");
    scanf("%d",&n);
    printf("Enter %d information : \n",n);
    printf("\n");
    for(i=0; i<n; i++)
    {
    printf("Enter information for person %d : \n",i+1);
    printf("Enter name for person %d : ",i+1);
    fflush(stdin);
    gets(person[i].name);
    printf("Enter age for person %d : ",i+1);
    scanf("%d",&person[i].age);
    printf("Enter salary for person %d : ",i+1);
    scanf("%f",&person[i].salary);
    printf("\n");
    }

    for(i=0; i<n; i++)
    {
    printf("Information of Person %d : \n",i+1);
    printf("Name = %s\n",person[i].name);
    printf("age = %d\n",person[i].age);
    printf("Salary = %.2f\n",person[i].salary);
    printf("\n");
    }
    return 0;
}

