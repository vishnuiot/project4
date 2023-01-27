//  Program to spawn processess
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    //  create two processess
    int pid = fork();
    //  error return

    if (pid == -1)
    {
        return 1;
    }
        if (pid != 0)
    {
        wait(NULL);
    }

    if(pid!=0){
        printf("Main process id %d\n",getpid());
    }
    else{
        printf("child process id %d \n",getpid());
    }

    return 0;
}
