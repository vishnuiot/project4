// static and extern global variable

#include <stdio.h>

int main()
{
    
int a =5;
int b= 7;
int *p;
*p=&a;
printf("The value stored in p is %d \n",*p);
    
    return 0;
}

