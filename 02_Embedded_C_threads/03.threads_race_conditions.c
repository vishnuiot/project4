// Example for race conditions
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>

int mails = 0;

void *routine()
{

    for (int i = 0; i < 1000; i++)
    {
        mails++;
        // read
        // increment
        // write
    }
}

int main()
{
    // declare  thread
    pthread_t t1, t2;

    // create thread
    if (pthread_create(&t1, NULL, &routine, NULL) != 0)
    {
        return 1;
    }

    if (pthread_create(&t2, NULL, &routine, NULL) != 0)
    {
        return 2;
    }

    // wait for threads
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("The no of mails is  %d \n", mails);
    return 0;
}