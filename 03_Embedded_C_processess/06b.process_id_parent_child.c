#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int id = fork();
    
    if (id != 0)
    {
        sleep(1);
        printf("Hello from main process \n");
        printf("The main process id is %d and the parent process id is %d \n", getpid(), getppid());
    }

    if (id == 0)
    {
            {
        printf("Hello from child process \n");
        printf("The child process id is %d and its parent process id is %d \n", getpid(), getppid());
    }
        
    }
  
}