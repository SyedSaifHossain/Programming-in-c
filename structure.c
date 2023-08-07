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
    person1.name[100]="Habib";
    person1.age=21;
    person1.salary=21000;
    printf("Information of Person1 : \n");
    printf("Name = %s\n",person1.name);
    printf("age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);
    printf("\n");

    person2.name[100]="Rafin";
    person2.age=23;
    person2.salary=23000;
    printf("Information of Person1 : \n");
    printf("Name = %s\n",person1.name);
    printf("age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);
    printf("\n");

    person3.name[100]="Sakib";
    person3.age=25;
    person3.salary=25000;
    printf("Information of Person1 : \n");
    printf("Name = %s\n",person1.name);
    printf("age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);
    printf("\n");
    return 0;
}

