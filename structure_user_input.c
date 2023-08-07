//Print information of person in structure in programming in c.

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
    printf("Enter information for person1 : \n");
    printf("Enter name for person1: ");
    fflush(stdin);
    gets(person1.name);
    printf("Enter age for person1 : ");
    scanf("%d",&person1.age);
    printf("Enter salary for person1 : ");
    scanf("%f",&person1.salary);
    printf("\n");

    printf("Information of Person1 : \n");
    printf("Name = %s\n",person1.name);
    printf("age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);
    printf("\n");

    printf("Enter information for person2 : \n");
    printf("Enter name for person2: ");
    fflush(stdin);
    gets(person2.name);
    printf("Enter age for person2 : ");
    scanf("%d",&person2.age);
    printf("Enter salary for person2 : ");
    scanf("%f",&person2.salary);
    printf("\n");

    printf("Information of Person2 : \n");
    printf("Name = %s\n",person2.name);
    printf("age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);
    printf("\n");

    printf("Enter information for person3 : \n");
    printf("Enter name for person3: ");
    fflush(stdin);
    gets(person3.name);
    printf("Enter age for person3 : ");
    scanf("%d",&person3.age);
    printf("Enter salary for person3 : ");
    scanf("%f",&person3.salary);
    printf("\n");

    printf("Information of Person3 : \n");
    printf("Name = %s\n",person3.name);
    printf("age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);
    return 0;
}
