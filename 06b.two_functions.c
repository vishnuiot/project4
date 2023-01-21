// Example for two functions

#include <stdio.h>
#include<math.h>


float mult(float a,float n);
float power(float a,int n);


int main()
{

    printf("The power is %0.2f \n",power(2,3));
    return 0;
}

float mult(float a,float n)
{
    return (a*n);
}

float power(float a,int n)
{
    int result =a;
    for (int i=1;i<n;i++)
    {
            result= mult(result,a);
    }
    return result;
}

