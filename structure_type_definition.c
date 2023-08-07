//Type definition in structure in programming in c.

#include<stdio.h>
struct Book
{
    char name[100];
    int price,code;
};
int main()
{
    typedef struct Book book;
    book b;
    printf("Enter any name of book : ");
    gets(b.name);
    printf("Enter book code : ");
    scanf("%d",&b.code);
    printf("Enter book price : ");
    scanf("%d",&b.price);
    printf("\n");

    printf("Name of book = %s\n",b.name);
    printf("Book code = %d\n",b.code);
    printf("Price of book = %d\n",b.price);
    return 0;
}

