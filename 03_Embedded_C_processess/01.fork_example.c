// Introduction to forks
// unistd is a linux specific library

#include<stdio.h>
#include<unistd.h>

int main()
{
    // fork calls a child process alongside the main process
    // fork();
    int id=fork();
        printf("Test program %d \n",id);
    if (id ==0){
        printf("Hello from child process \n");
    }
    else{
        printf("Hello from main process \n");
    }
    return 0;
}