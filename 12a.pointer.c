// pointer - datatype

#include <stdio.h>
int main()
{
    int num=20;
    int *num_ptr;
    num_ptr=num;
    printf("The value of num is %d ",num);
    printf("The address of num is %d",&num);
    printf("The address of pointer is %ls ",num_ptr);
    // printf("test program \n");
}