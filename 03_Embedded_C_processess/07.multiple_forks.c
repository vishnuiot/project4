// Multiple forks -- always create child from a parent process to prevent
//  multiple overrun

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

int main()
{
    int id1 = fork();
    int id2 = fork();

    if (id1 == 0)
    {
        if (id2 == 0)
        {
            printf("This is process y \n");
        }
        else
        {
            printf("This is parent process \n");
        }
    }

    // printf("The process id of fork 1 is %d ",getpid(id1));
    // printf("TEst program \n");
}