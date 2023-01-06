// pass by reference

#include<stdio.h>

int mathadd(int num1,int num2);
float mathavg(float a, float b);
a=7;b=10;

int main()
{
    printf("The addition of two numbers is %d \n",mathadd(5,6));
    printf("The average of two numbers is %f \n",mathavg(a,b));
    return 0;
}

int mathadd(int num1,int num2)
{
    int result=num1+num2;
    return result;
}

float mathavg(float a,float b)
{
    return (a/b);
}

