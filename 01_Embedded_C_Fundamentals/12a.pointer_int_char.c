// pointer - datatype

#include <stdio.h>

int main()
{
    
int a =50000;
int b= 70000;
int *p;
p=&a;
printf("The value stored in p is %d \n",*p);

*p=*p+a+8;
printf("The pass by reference %d \n",*p);

// // change pointer date type and print the result
char g='ajdalfa';
char *y;
y=&g;
printf("The pass by reference %c \n",*y);
    
    return 0;
}

