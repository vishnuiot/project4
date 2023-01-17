// test program
#include <stdio.h>

int main(){
    int led1=1,led2=2,led3=3,led4=4,led5=5,led6=6,led7=7,led8=8;
    int s[]={ led1,led2,led3,led4,led5,led6,led7,led8};
    int i;
    for (i=0;i<8;i++)
        {
            printf("the led no %d is %d\n",i,s[i]);
        }

    printf("Test program \n");
    return 0;
}