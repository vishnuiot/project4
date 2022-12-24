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