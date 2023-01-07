//  Pointer - Array

#include <stdio.h>
int main()
{
    int c[5]={1,2,3,4,5};
    int *ptr;
    ptr=&c[0];
    int i;
    for (i=0;i<5;i++)
    {
        printf("The value in array is %d \n",c[i]);
        printf("The address of array elements is %d \n",&c[i]);
        printf("The value of pointer is %d \n",*(ptr+i));

    }

    printf("The address of pointer is %d \n",ptr);
    printf("The value of pointer is %d \n",*(ptr)); // incremented by one location
    printf("The value of pointer is %d \n",*(ptr+1)); // incremented by one location
    printf("The value of pointer is %d \n",*(ptr+2));
    printf("The value of pointer is %d \n",*(ptr+3));
    printf("The value of pointer is %d \n",*(ptr+4));
    // printf("Test program \n");
    return 0;
}