//  pointer increment char

#include <stdio.h>


int main()
{
    char arr[5]={"a""b""c""d""e"};
    char *ptr;
    ptr=&arr[0];
    int i=0;
    for (i=0;i<5;i++)
    {
        printf("The array characters are %c \n",arr[i]);
        
       
    }
     printf("The value of pointer is %d \n",ptr);
     printf("The value of pointer is %d \n",ptr+1);
     printf("The value of pointer is %d \n",ptr+2);
     printf("The value of pointer is %d \n",ptr+3);
     printf("The value of pointer is %d \n",ptr+4);

    for (i=0;i<5;i++)
    {
        printf("The value of pointer is %d \n",ptr+i);
        printf("The value stored by pointer is %c \n",*(ptr+i));
           
    }

    //  printf("The value of pointer is %d \n",ptr(i));
    // printf("Test program \n ");
}

