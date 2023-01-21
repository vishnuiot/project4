// Example for two functions

#include <stdio.h>
#include<math.h>

float power(float a,float b);

int main()
{
    float x;
    x=power(10,2);
    printf("The answer is %f \n",x);
    return 0;
}

float power(float a,float b)
{
    int result = a+b;
    return result;
}

