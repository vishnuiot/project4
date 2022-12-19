//Example for short memory space, long memory space

#include <stdio.h>
int main()
{
    unsigned long costA=300; //change char to long to accomodate extra memory space
    unsigned char costB=100;
    unsigned long total;
    total=costA+costB;
    printf("char size is %d \n",sizeof(long));
    printf("The total cost is %ld \n",total);
    
}