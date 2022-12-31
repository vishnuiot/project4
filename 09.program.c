//Example for pointer variables - read/write/substitute operation


#include <stdio.h>
int main ()
{
    
    float num=20,num2=100;
    int *num_ptr;
    num_ptr=&num;
    printf("The value of num is %lf \n ",num);
    printf("The address of num is %d \n",&num);
    printf ("The value of the address of the integer data type is %d \n",num_ptr);
    printf("De_referencing of pointer value is %lf \n",*num_ptr);

    *num_ptr=50;
    printf("The value of num is %e \n ",num);
    printf ("The value of the address of the integer data type is %e \n",num_ptr);
    printf("De_referencing of pointer value is %e \n",*num_ptr);

    *num_ptr=&num2;
    printf("The address of num2 is %e \n",*num_ptr);
    printf("Dereferencing num 2 %e \n",*num_ptr);
    printf("The value of num2 is %e \n ",num2);




}