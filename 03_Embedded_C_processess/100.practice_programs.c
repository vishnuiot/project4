// generate 3 process

#include <stdio.h>
#include <unistd.h>
int main()
{
    int id = fork();

    if (id != 0)
    {
        printf("HEllo from main process , %d \n",id);
    }
    else
    {
        printf("Hello from child  process , %d \n",id);
       int secondid=fork();
        if (secondid!= 0){
            printf("Hello from second main process %d \n",secondid);
        }
    };
    // printf("Test program \n");
    return 0;
}