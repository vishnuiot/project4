// Program for mutex in threads

#include <stdio.h>
#include <pthread.h>

int mails = 0;
// create a mutex
pthread_mutex_t mutex;

void *routine()
{
    int mails = 0;
    for (int i = 0; i < 100; i++)
    {
        mails++;
        // read mails
        // increment mails
        // write mails
    }
}

int main()
{
    // declare a thread
    pthread_t t1;
    pthread_t t2;

    // Creae a thread

    if (pthread_create(&t1, NULL, &routine, NULL) != 0)
    {
        return 1;
    }

    // wait for thread to end
    pthread_join(t1, NULL);

    printf("The no of mails is %d \n",mails);
    return 0;
}