//Example for pointer variables - read/write/substitute operation
// https://stackoverflow.com/questions/1689423/memory-address-positive-or-negative-value-in-c


#include <stdio.h>
int main ()
{
    
    float num=20,num2=100;
    int *num_ptr;
    int num_ptr=&num;
    printf("The value of num is %lf \n ",num);
    printf("The address of num is %p \n",&num);
    printf ("The value of the address of the integer data type is %p \n",num_ptr);
    printf("De_referencing of pointer value is %lf \n",*num_ptr);

    *num_ptr=50;
    printf("The value of num is %lf \n ",num);
    printf ("The value of the address of the integer data type is %p \n",num_ptr);
    printf("De_referencing of pointer value is %p \n",*num_ptr);

    *num_ptr=&num2;
    printf("The address of num2 is %d \n",*num_ptr);
    printf("Dereferencing num 2 %d \n",*num_ptr);
    printf("The value of num2 is %lf \n ",num2);




}