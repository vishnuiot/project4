// Example program for static and external class storage specifiers

#include<stdio.h>

int main()
{
myfunc();
myfunc();
myfunc();
    printf("Static storage class \n");
}

void myfunc()
{
    count=count+1;
    printf("The count is  %d \n",count);
}