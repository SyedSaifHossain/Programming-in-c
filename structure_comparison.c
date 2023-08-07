//Comparison in structure in programming in c.

#include<stdio.h>
struct Person
{
    char name[100];
    int age;
    float salary;
};
int main()
{
    struct Person person1,person2,person3;
    printf("Information of person1 : \n");
    printf("Enter person1 name : ");
    fflush(stdin);
    gets(person1.name);
    printf("Enter Person1 age : ");
    scanf("%d",&person1.age);
    printf("Enter Person1 salary : ");
    scanf("%f",&person1.salary);
    printf("\n");

    printf("Information of Person1 \n");
    printf("Name : %s\n",person1.name);
    printf("Age : %d\n",person1.age);
    printf("Salary : %.2f\n",person1.salary);
    printf("\n");

    printf("Information of person2 : \n");
    printf("Enter person2 name : ");
    fflush(stdin);
    gets(person2.name);
    printf("Enter Person2 age : ");
    scanf("%d",&person2.age);
    printf("Enter Person2 salary : ");
    scanf("%f",&person2.salary);
    printf("\n");

    printf("Information of Person2 \n");
    printf("Name : %s\n",person2.name);
    printf("Age : %d\n",person2.age);
    printf("Salary : %.2f\n",person2.salary);
    printf("\n");

    if(person1.age==person2.age && person1.salary==person2.salary)
    {
        printf("Person1 and person2 are equal");
    }
    else
    {
        printf("person1 and person2 are not equal");
    }
    return 0;






}
