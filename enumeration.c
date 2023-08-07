//Enumeration in programming in c.

#include<stdio.h>
enum day
{
    sat,sun,mon,tue,wed,thu,fri
};
int main()
{
    enum day day1,day2;
    int addition,subtraction,multiplication,division,remainder;
    day1=fri;
    day2=wed;
    addition=day1+day2;
    subtraction=day1-day2;
    multiplication=day1*day2;
    division=day1/day2;
    remainder=day1%day2;
    printf("Addition of day = %d\n",addition);
    printf("Subtraction of day = %d\n",subtraction);
    printf("Multiplication of day = %d\n",multiplication);
    printf("Division of day = %d\n",division);
    printf("Remainder of day = %d\n",remainder);
    return 0;
}

