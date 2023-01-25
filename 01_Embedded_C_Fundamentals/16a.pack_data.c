//  Pack and unpack data

#include <stdio.h>

int main()
{

    int s1=7,s2=5,m=0,var_tx=0,var_rx=0;

    var_tx=(var_tx)|(s1);
    var_tx=var_tx|(s2<<3);
    var_tx=var_tx|(m<<6);
     printf("The packed values of var_tx = %d  \n",var_tx);

    int var_rx_s1=0,var_rx_s2=0,var_rx_m=0;
    var_rx=var_tx;
    var_rx_s1=var_rx &(0b00000111);
    printf("The value of s1 is %d \n",var_rx_s1);

    var_rx_s2=(var_rx>>3) &(0b00111111);
    printf("The value of s2 is %d \n",var_rx_s2);

    var_rx_m=(var_rx>>6) &(0b11111111);
    printf("The value of m is %d \n",var_rx_m);

   
    return 0;
}