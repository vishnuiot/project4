// Example for communication between processess
//  This is significant when we are limited by the no of processes
#include <stdio.h>
#include<unistd.h>

int main()
{
    int fd[2];
    // fd[0] is the read end fd[1] is the write end
    pipe(fd);
    if(pipe(fd)==-1){
        printf("An error occured with opening the pipe \n");
    }

    int id=fork();
    if(id==-1){
        printf("An error occured during fork \n");
    }
    if (id==0){
        close(fd[0]);
        int x;
        printf("Input a number \n");
        scanf("%d",&x);
        write(fd[1],&x,sizeof(int));
        if(write(fd[1],&x,sizeof(int))==-1){
            printf("An error occured writing to the pipe \n");
        }
        close(fd[1]);
    } else{
        close(fd[1]);
        int y;
        read(fd[0],&y,sizeof(int));
        if(read(fd[0],&y,sizeof(int))==-1){
            printf("An error occured reading from pipe \n");
        }
        close(fd[0]);
        printf("Got from child process %d \n",y);
    }
    return 0;
}
