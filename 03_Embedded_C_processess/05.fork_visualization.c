#include <stdio.h>
#include <unistd.h>

int main()
{
    int id = fork();
    if (id != 0)
    {
        printf("Hello from main process. Id is %d \n ", id);
    }
    if(id == 0)
    {
        printf("Hello from child process. Id is = %d \n", id);
    }
    // printf("HEllo from main process. Id is %d ",id);
    return 0;
}