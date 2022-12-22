#include <stdio.h>
void addnumbers(int a,int b); // adds two values
//void sub() // subtracts two values

int main()
{
//    printf("test \n");
    addnumbers(5,6);
    printf("addition of two numbers = %d \n",addnumbers);
    return 0;
}

void addnumbers(int a,int b)
{
    return a+b;
}
