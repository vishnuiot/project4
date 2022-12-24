//Example for address of a variable & type casting
// type casting higher to lower --> Float to int

#include <stdio.h>
int a=5;
int b=2;
int c ;
// conversion of types from int to double

int main()
{
unsigned long int addressofA=(unsigned long int)&a; // type casting
printf("The address of a is %p \n",&a);//& gives variable address
printf("The address of a %ld  \n",addressofA);
float c=(float) a/b;// type casting
printf("Division is %d/%d = %f \n",a,b,c);
return 0;
}