#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <pthread.h>

void *routine()
{
    printf("Test program \n");
    sleep(3);
    printf("Message ending thread \n");


}

int main()
{
    // thread one
    pthread_t t1;
    // thread two
    pthread_t t2;
    pthread_create(&t1, NULL, &routine, NULL);
    pthread_create(&t2, NULL, &routine, NULL);
    pthread_join(t1, NULL);    
    pthread_join(t2, NULL);
    return 0;
}
