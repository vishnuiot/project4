#include<stdio.h>

int mathadd(int num1,int num2);
int mathavg(int a, int b);
a=7;b=10;

int main()
{
    printf("The addition of two numbers is %d \n",mathadd(5,6));
    return 0;
}

int mathadd(int num1,int num2)
{
    int result=num1+num2;
    return result;
}

int mathavg(int a,int b)
{
    return (a/b);
}

