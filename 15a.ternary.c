// ternary operator only returns a value after ? 
// It requires three operands

#include<stdio.h>

int main()
{
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