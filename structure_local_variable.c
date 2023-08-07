//Local variable in structure in programming in c.

#include<stdio.h>
struct Person   //Global structure initialize.
{
    char name[100];
    int age;
    float salary;
};
int main()
{
    struct Person person1,person2,person3;   //Local variable initialize.
    printf("Information for person1\n");
    printf("Enter Person1 name : ");
    fflush(stdin);
    gets(person1.name);
    printf("Enter person1 age : ");
    scanf("%d",&person1.age);
    printf("Enter person1 salary : ");
    scanf("%f",&person1.salary);
    printf("\n");
    printf("Information of person1 : \n");
    printf("Name = %s\n",person1.name);
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);
    printf("\n");

    printf("Information for person2 \n");
    printf("Enter Person2 name : ");
    fflush(stdin);
    gets(person2.name);
    printf("Enter person2 age : ");
    scanf("%d",&person2.age);
    printf("Enter person2 salary : ");
    scanf("%f",&person2.salary);
    printf("\n");
    printf("Information of person2 : \n");
    printf("Name = %s\n",person2.name);
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);
    printf("\n");

    printf("Information for person3 \n");
    printf("Enter Person3 name : ");
    fflush(stdin);
    gets(person3.name);
    printf("Enter person3 age : ");
    scanf("%d",&person3.age);
    printf("Enter person2 salary : ");
    scanf("%f",&person3.salary);
    printf("\n");
    printf("Information of person3 : \n");
    printf("Name = %s\n",person3.name);
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);
    return 0;
}

