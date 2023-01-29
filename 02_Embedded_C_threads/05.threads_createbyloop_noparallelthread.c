// create threads by loop

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>
int mails = 0;
pthread_mutex_t mutex;

void *routine()
{
    int i;
    for (i = 0; i < 1000; i++)
    {
        pthread_mutex_lock(&mutex);
        mails++;
        pthread_mutex_unlock(&mutex);
    }
}

void main()
{
    // declare threads
    pthread_t th[4];
    pthread_mutex_init(&mutex,NULL);
    for (int i = 1; i < 5; i++)
    {
        // create thread
        pthread_create(&th[i], NULL, &routine, NULL);

         printf("The thread no  %d has begun execution \n", i);
        // wait for thread
        pthread_join(th[i], NULL);

        printf("The thread no  %d has finished execution \n", i);
    }

    pthread_mutexattr_destroy(&mutex);

    printf("The mails are %d \n", mails);

    printf("This is an example for operations on a single thread  \n");
    printf("There is no multi-threaded operation here..!!  \n");
}