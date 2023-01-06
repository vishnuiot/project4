// pointer - datatype

#include <stdio.h>
int main()
{
    int num=20;
    int *num_ptr;
    num_ptr=&num; // address of num stored in a pointer
    int num2=1000;
    int *num2_ptr;
    num2_ptr=&num2;

    printf("The value of num is %d \n ",num);
    printf("The address of num is %d \n",&num);
    printf("The value of address stored in pointer is %d \n",num_ptr);
    printf("The address of pointer is %d \n",&num_ptr);
    printf("\n");
    printf("The dereferenced value stored in  pointer is %d \n",*num_ptr);
    *num_ptr=50;
    printf("The dereferenced value stored in  pointer is %d \n",*num_ptr);
    printf("The value of num is %d \n ",num);
    printf("\n");
    printf("The value of num2 is %d \n ",num2);
    printf("The address of num2 is %d \n",&num2);
    printf("The value of address stored in pointer is %d \n",num2_ptr);
    printf("The address of pointer is %d \n",&num2_ptr);
    printf("The dereferenced value stored in  pointer is %d \n",*num2_ptr);
    // printf("test program \n");
}