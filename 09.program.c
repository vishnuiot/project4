//Example for pointer variables - read operation
// create a char variable and initialize the value as 1500
// print the address of the data 
// create a pointer variable
// store the address of the variable
// performa the read operation to fetch 1 byte
//


#include <stdio.h>
int main ()
{
    
    int num=20;
    int *num_ptr;
    num_ptr=&num;
    printf("The value of num is %d \n ",num);
    printf("The address of num is %d \n",&num);
    printf ("The value of the address of the integer data type is %d \n",num_ptr);
    printf("De_referencing of pointer value is %d \n",*num_ptr);

    *num_ptr=50;
    printf("The value of num is %d \n ",num);
    printf ("The value of the address of the integer data type is %d \n",num_ptr);
    printf("De_referencing of pointer value is %d \n",*num_ptr);
    
    char data =100;
    char *pointervariable; 
    pointervariable=&data;
    // read operation
    char value=*pointervariable; // dereference the pointer variable
    printf("The address of the data %x \n",&data);
    printf(" The value stored in pointer variable is  %d  \n",value);

    // write operation
    *pointervariable =60;
    printf(" The value stored in pointer variable is  %d  \n",data);
    return 0;
}