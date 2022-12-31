// Documeting a function

#include <stdio.h>

int a;int b;
myaddition(int a,int b);            // Function prototype
int main()
{
    int sum=myaddition(5,6);                // Function call
    printf("The addition of two numbers is %d \n",sum);       
    printf("Test program \n ");
    return 0;
}

myaddition(int a,int b)             // function definition
{
    int result=a+b;
    return result;                  // return statement
}

