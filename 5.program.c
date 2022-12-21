// Example program for static and external class storage specifiers

#include<stdio.h>
void myfunc();
int main()
{
    myfunc();
    myfunc();
    myfunc();
    //printf("Static storage class \n");
    return 0;
}

void myfunc()
{
    static int count=0; // static storage class specifier
    count=count+1;
    printf("The count is  %d \n",count);
}