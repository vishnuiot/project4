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
        n = 6;
    }
    if (id != 0)
    {
        wait();
    }

    for (int i = 0; i < n+5 ; i++)
    {
        printf("%d", i);
        fflush(stdout);
    }

    printf("\n");
    return 0;
}