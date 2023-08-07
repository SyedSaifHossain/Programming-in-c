//Information of person in structure directly initialization in programming in c.

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
    strcpy(person1.name,"Habib");
    person1.age=21;
    person1.salary=21000;
    printf("Information of person1 : \n");
    printf("Name = %s\n",person1.name);
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);
    printf("\n");

    strcpy(person2.name,"Rafin");
    person2.age=23;
    person2.salary=23000;
    printf("Information of person2 : \n");
    printf("Name = %s\n",person2.name);
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);
    printf("\n");

    strcpy(person3.name,"Sakib");
    person3.age=25;
    person3.salary=25000;
    printf("Information of person3 : \n");
    printf("Name = %s\n",person3.name);
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);
    return 0;
}
