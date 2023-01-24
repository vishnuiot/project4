//  Array functions

#include<stdio.h>

void main()
{
    char arr[5]={"a""b""c""d""e"};
    listarray(arr);
    printf("The address of the first value is %d \n",arr);
    pointerarray(arr);
    printf("The value of substitued array element is  %c \n",*(arr+1));
    printf("The value of substitued array element is  %c \n",*(arr+2));
    return 0;
    
    // printf("Test program  \n");

}

void listarray(char charr[5])
{
    int i=0;
    printf("The address of the first value is %d \n",charr);
    for(i=0;i<5;i++)
    {
        printf("The elemets %d is = %c \n",i+1,charr[i]);
        // return charr;
    }
}

void pointerarray (char *pointerchar)
{
    int i=0;
    printf("The address of the first value is %d \n",pointerchar);
    for(i=0;i<5;i++)
    {
        printf("The elemets %d is = %c \n",i+1,*(pointerchar+i));
        printf("The memory_address of element %d is = %d \n",i+1,(pointerchar+i));
        // return charr;
    }

    *(pointerchar+2)='m';
}