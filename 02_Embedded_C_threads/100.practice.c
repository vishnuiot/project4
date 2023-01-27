#include <stdio.h>
#include <pthread.h>
void *routine()
{
    printf("Welcome to thread \n");
    sleep(3);
    printf("Ending from threads \n");
}

int main()
{
    // thread declaration
    pthread_t t1;
    pthread_t t2;

    pthread_create(&t1, NULL, &routine, NULL);
    pthread_create(&t2, NULL, &routine, NULL);
    // wait for thread
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
}