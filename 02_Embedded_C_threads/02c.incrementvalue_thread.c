// In threads , the two threads share memory and hence
// the value stored in memory

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
int x=2;

int *routine1()
{
    printf("Get process id  of routine 1 %d \n", getpid());
    x++;
    printf("The value of x from routine 1 is %d \n",x);
    wait(2);
}

int *routine2()
{
    printf("Get process id of routine 2 %d \n", getpid());
    printf("The value of x from routine 2 is %d \n",x);

}


int main()
{
    pthread_t t1;
    pthread_t t2;

    pthread_create(&t1,NULL,routine1,NULL);
    pthread_create(&t2,NULL,routine2,NULL);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

}