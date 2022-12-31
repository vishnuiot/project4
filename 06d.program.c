// Documeting a function

#include <stdio.h>


int myaddition(int a,int b);            // Function prototype
int main()
{
    int sum=myaddition(5,6);                // Function call
    printf("The addition of two numbers is %d \n",sum);       
    printf("Test program \n ");
    return 0;
}

int myaddition(int a,int b)             // function definition
{
    int result=a+b;
    return result;                  // return statement
}

