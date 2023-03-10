#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(array);                       // gives the no of bytes
    int no_of_elements = sizeof(array) / sizeof(int); // divide bytes by int
    printf("%d \n", no_of_elements);
    int start, end;
    int  fd[2];
    pipe(fd);

    int id = fork();

    if (id == 0)
    {
        start = 0;
        end = no_of_elements / 2;
    }
    else
    {
    start=no_of_elements/2;
    end=no_of_elements;
    }

    int sum=0;
    for (int i=start;i<end;i++){
        sum+=array[i];
    }
    printf("The calculated partial sum is %d \n",sum);

    if (id==0){
        close(fd[0]);
        write(fd[1],&sum,sizeof(sum));
        close(fd[1]);
    }
    else{
        int sumfromchild;
        close(fd[1]);
        read(fd[0],&sumfromchild,sizeof(sumfromchild));
        close(fd[0]);

        int totalsum=sumfromchild+sum;
        printf("The total sum is %d \n",totalsum);
        wait(NULL);
    }

    return 0;
}
