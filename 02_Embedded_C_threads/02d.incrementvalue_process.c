// Example for process increment value in child and not
// main process

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main()
{
    int pid = fork();
    int x = 1;
    if (pid != 0)
    {
        wait(NULL);
    }

    if (pid == 0)
    {
        x = x+1;
        printf("The child_process incremnented value =%d \n", x);
    }
    else{
        printf("The unincremented main process value = %d \n",x);
    }
}