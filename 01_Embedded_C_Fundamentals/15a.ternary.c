// uniary( ++ --),binary( ) & ternary operator
// ternary operator only returns a value after ? 
// It requires three operands

#include<stdio.h>

int main()
{
    // unary operator
    int x,y,g;
    x=5;
    y=x++;
    printf("The pre-incremented value of x is %d \n",y);
    g=++x;
    printf("The pre-incremented value of x is %d \n",g);

    int a,b,max;
    a=5;b=10;max=0;
    max=(a>b?a:b);
    printf("The value of the maximum value is %d \n",max);

    if (a>b)
    {
        printf("A is greater and the value is %d \n",a);
    }
    else{
        printf("B is greater . THe value is %d \n",b);
    }
    return 0;
}