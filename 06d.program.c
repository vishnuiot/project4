// Documeting a function

#include <stdio.h>


float myaddition(float a,float b);            // Function prototype with return type int

int main()
{
    float a,b,sum;
    sum=myaddition(5,6);                // Function call
    sum=myaddition(8.9,9);                // Function call
    sum=myaddition(7,8);                // Function call
    printf("Test program \n ");
    return 0;
}

float myaddition(float a,float b)             // function definition
{
    float result=a+b;
    printf("The addition of two numbers is %f \n",result); 
    return result;                  // return statement
}

