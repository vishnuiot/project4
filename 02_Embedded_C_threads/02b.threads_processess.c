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

    printf("Hello from fork process \n");
    printf("Hello 2 from fork process \n");

    if (pid != 0)
    {
        wait(NULL);
    }

    return 0;
}
