// List process id's

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int id = fork();
    if (id ==0){
        sleep(1);
    }
    printf("THe present process id is %d and main process is %d  \n", getpid(), getppid());
    
    // process id we were waiting for
    int res=wait(NULL);
    if (res=-1){
        printf("No child process to wait for \n");
    }
    else{
        printf("%d finished execution",res);
    }
    return 0;
}
