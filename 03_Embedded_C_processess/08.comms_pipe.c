// Example for communication between processess

#include <stdio.h>

int main()
{
    int fd[2];
    // fd[0] is the read end fd[1] is the write end
    pipe(fd);
    if(pipe(fd)==-1){
        printf("An error occured with opening the pipe \n");
    }

    int id=fork();
    if (id==0){
        close(fd[0]);
        int x;
        printf("Input a number \n");
        scanf("%d",&x);
        write(fd[1],&x,sizeof(int));
        close(fd[1]);
    } else{
        close(fd[1]);
        int y;
        read(fd[0],&y,sizeof(int));
        close(fd[0]);
        printf("Got from child process %d \n",y);
    }
    return 0;
}
