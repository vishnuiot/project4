// Program for mutex in threads

#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>

int mails = 0;
// declare a mutex
pthread_mutex_t mutex;

void *routine()
{
    for (int i = 0; i < 1000000; i++)
    {
        pthread_mutex_lock(&mutex);
        mails++;
        pthread_mutex_unlock(&mutex);
        // read mails
        // increment mails
        // write mails
    }
}

int main()
{
    // declare a thread
    pthread_t t1, t2;

    // Initialize a mutex followed by destroy a mutex
    pthread_mutex_init(&mutex, NULL);

    // Creae a thread

    if (pthread_create(&t1, NULL, &routine, NULL) != 0)
    {
        return 1;
    }
    if (pthread_create(&t2, NULL, &routine, NULL) != 0)
    {
        return 2;
    }

    // wait for thread to end
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    // create a mutex
    pthread_mutex_destroy(&mutex);

    printf("The no of mails is %d \n", mails);
    return 0;
}