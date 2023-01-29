// create threads by loop

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/wait.h>
int mails =0;
void *routine()
{
int i;
for (i=0;i<100;i++){
    mails++;
}
}

void main(){
    printf("Test program \n");
}