#include <stdio.h>

float newfunc(float a, float b);
float power(float x, int n);
int main()
{
    float x = 5;
    float g = power(5.8, 9);
    printf("The answer is  %0.2f \n", g);

    return 0;
}

float newfunc(float a, float b)
{
    float c;
    c = a * b;
    // printf("The answer is %f \n", c);
    return c;
}

float power(float x, int n)
{
    int i;
    int result = x;
    for (i = 1; i < n; i++)
    {
        result=newfunc(result,x);
    }
    return result;
}