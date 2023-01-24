#include <stdio.h>

float newfunc(float a,float b);
int main()
{
    float x=5;
    float g=newfunc(10,5);
    printf("G is %f \n",g);
    
    return 0;
}

float newfunc(float a,float b)
{
    float c;
    c= a*b;
    printf("The answer is %f \n",c);
    return c;
}