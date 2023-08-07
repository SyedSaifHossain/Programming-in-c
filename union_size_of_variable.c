//Size of variable in union in programming in c.

#include<stdio.h>
union test1
{
    char name[50];
};
union test2
{
    int x,y,z;
};
union test3
{
    int x;
    float f;
    double d;
};
int main()
{
    union test1 t1;
    union  test2 t2;
    union test3 t3;
    printf("Size of t1 = %d\n",sizeof(t1));
    printf("Size of t2 = %d\n",sizeof(t2));
    printf("Size of t3 = %d\n",sizeof(t3));
    return 0;
}
