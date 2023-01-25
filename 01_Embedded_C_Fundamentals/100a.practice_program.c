// array practice
#include<stdio.h>
int array[]={10,20,30,40,50};

int main()
{

for (int i=0;i<5;i++)
    printf("The array element no %d is %d \n",i,array[i]);

int total=0;

for (int i=0;i<5;i++)
    total+=array[i];
printf("The total is %d \n",total);
printf("The average of array is %d \n",total/5);
    

}

    