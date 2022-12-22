//Example for pointer variables
// create a char variable and initialize the value as 1500
// print the address of the data 
// create a pointer variable
// store the address of the variable
// performa the read operation to fetch 1 byte
//


#include <stdio.h>
int main ()
{
    char data =100;
    // printf (" The addrress of the variable data is %x \n ",&data);// %x format specifier hexadecimal
    char *pointervariable; 
    pointervariable=&data;
    char value=*pointervariable; // dereference the pointer variable
    printf("The address of the data %x \n",&data);
    printf(" The value stored in pointer variable is  %d  \n",value);
    // printf ("test program \n");
    return 0;
}