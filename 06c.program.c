// Example of function 

#include <stdio.h>

// list of functions
int mathadd(int a, int b);
int mathmul(int a,int b);
int mathsub(int a,int b);
float mathdivide(int a, int b);

int a=6;int b=10;
int main()
{
    printf("The addition of two numbers is %d \n",mathadd(a,b));
    printf("The multiplication of two numbers is %d \n",mathmul(a,b));
    printf("The multiplication of two numbers is %d \n",mathsub(a,b));
    printf("The multiplication of two numbers is %f \n",mathdivide(a,b));
    printf("Test program \n");
}

int mathadd(int a, int b)
{
    int output=a+b;
    return output;
}

int mathmul(int a, int b)
{
    int output=a*b;
    return output;
}

int mathsub(int a, int b)
{
    int output=a-b;
    return output;
}

float mathdivide(int a, int b)
{
    float output=((float) a)/b;
    return output;
}


