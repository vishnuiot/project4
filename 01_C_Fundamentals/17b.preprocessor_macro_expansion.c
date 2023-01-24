//  Macro expansion example

#include<stdio.h>

# define area(l,b) l*b

int main()
{
    int length=100,breadth =20;

    printf("The area is %d \n",area(length,breadth));
    return 0;
}