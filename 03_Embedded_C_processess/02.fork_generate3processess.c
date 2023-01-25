// Example to generate 3 process
// if id ==0 then it is child process else it is main process
#include<stdio.h>
#include<unistd.h>

int main ()
{
    int id =fork();
    if (id !=0)
    {
        fork();
   
    }
    printf("Hello from process \n");
}