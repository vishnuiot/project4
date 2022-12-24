// functions 

#include <stdio.h>
void addnumbers(int a,int b); // adds two values
// void mulnumbers(int a,int b); // multiply two values
//void sub() // subtracts two values

int main()
{
//    printf("test \n");
    addnumbers(5,6);
    printf("addition of two numbers = %d \n",addnumbers);
    // mulnumbers(5,10);
    // printf("The multiplication of two numbers = %d \n",mulnumbers);
    return 0;
}

int addnumbers(int a,int b);
{
    return a+b;
}

// int mulnumbers(int a,int b);
// {
//     return a*b;
// }
