// Example to generate several fork .. here 4 processess

#include<stdio.h>
#include<unistd.h>
int main()
{
    fork();
    // fork();
    // fork();
    printf("Hello from fork \n");
    return 0;
}