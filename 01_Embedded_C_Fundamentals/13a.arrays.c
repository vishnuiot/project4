// Example for arrays

#include<stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int avg =0;
    printf("The value of index zero is %d \n",arr[0]);
    arr[1]=20;// change the index 1 value 
    printf("The value of index zero is %d \n",arr[1]);

    int i;
    for (i=0;i<5;i++)
    {
        printf("The value of i is %d \n",arr[i]);
        avg=avg+arr[i];
        // printf("The value of avg is %d \n",avg);
    }
    avg;
    printf("The sum is %d \n",avg);
    avg=avg/5;
    printf("The average is %d \n",avg);



}