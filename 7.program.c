// static and external function specifier

#include <stdio.h>


void myfunction();
void myfunc();

int privatedata;

int main ()
{
    privatedata=50;
    printf("private data %d \n",privatedata);

    myfunction();
    printf("the function_privatedata is %d \n",privatedata);
    printf("test \n");
// static section
    myfunc();
    myfunc();
    myfunc();
    return 0;
}


void myfunc()
{
    static int count=0; // static storage class specifier
    count=count+1;
    printf("The count is  %d \n",count);
}
