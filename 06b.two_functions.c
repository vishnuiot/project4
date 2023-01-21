// functions 

#include <stdio.h>
// void addnumbers(); // adds two values
// void mulnumbers(int a,int b); // multiply two values
//void sub() // subtracts two values
int mathadd(int a,int b);

int main()
{
    int c;
    // c=mathadd(5,6)
    printf("The addition of two numbers is %d \n",mathadd(51,6));
    printf("Test program \n");

}

int mathadd(int a,int b)
{
    int c=a+b;
    return c;
}