// program to spawn threads

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *routine()
{
    printf("Test program \n");
    sleep(3);
    printf("Message ending thread after 3 seconds\n");

}
int main()
{
        // thread one type( pthread_t) t1( variable)
    pthread_t t1;
}