// program to spawn threads

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *routine()
{
    printf("process id %d \n",getpid());
    printf("Test program \n");
    sleep(3);
    printf("Message ending thread after 3 seconds\n");
}
int main()
{
    // thread one type( pthread_t) t1( variable)
    pthread_t t1;
    pthread_t t2;

    if (pthread_create(&t1, NULL, &routine, NULL))
    {
        return 1;
    }

    if (pthread_create(&t2, NULL, &routine, NULL))
    {
        return 1;
    }

    // wait for threads
    if(pthread_join(t1, NULL)){
        return 1;
    }
    if( pthread_join(t2, NULL)){
        return 1;
    }
   
}