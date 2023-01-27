#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    int id = fork();
    int n;
    if (id == 0)
    {
        n = 1;
    }
    else
    {
        n = 10;
    }
    // check to figure out if we are in main process
    if (id != 0)
    {
        wait();
    }

    for (int i = 0; i < n + 5; i++)
    {
        if (id == 0)
        {
            printf("The child process id is %d - %d \n", id, i);
            fflush(stdout);
        }
        else
        {
            printf("The main process id is %d - %d \n", id, i);
            fflush(stdout);
        }
    }

    if (id != 0)
    {
        printf("\n");
    }

    return 0;
}