//Size of variable in structure in programming in c.

#include<stdio.h>
struct test1
{
    char name[50];
};
struct test2
{
    int x;
};
struct test3
{
    int x;
    float f;
};
int main()
{
    struct test1 t1;
    struct  test2 t2;
    struct test3 t3;
    printf("Size of t1 = %d\n",sizeof(t1));
    printf("Size of t2 = %d\n",sizeof(t2));
    printf("Size of t3 = %d\n",sizeof(t3));
    return 0;
}

