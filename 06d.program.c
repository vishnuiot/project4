// Documeting a function

#include <stdio.h>

myaddition(int a,int b);            // Function prototype
int main()
{
    myaddition(5,6);                // Function call
    printf("Test program \n ");
    return 0;
}

myaddition(int a,int b)             // function definition
{
    int result=a+b;
    return result;                  // return statement
}

