//Example for address of a variable & type casting

#include <stdio.h>
int a=5;

int main()
{
unsigned long int addressofA=(unsigned long int)&a; // type casting
printf("The address of a is %p \n",&a);//& gives variable address
printf("The address of a %ld  \n",addressofA);
return 0;

}