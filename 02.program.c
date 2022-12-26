//Example for char memory effect
#include <stdio.h>
int main()
{
    unsigned char costA=30;
    unsigned char costB=100;
    unsigned char total;
    total=costA+costB;
    printf("The total cost is %d \n",total);

    int a,b;
    a=10;b=99;// initialize the values
    printf("The values are %d \t%d \n",a,b);
    
}