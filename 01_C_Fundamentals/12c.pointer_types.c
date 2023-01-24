//  Different types of pointer
// wild pointer;null pointer;dangling pointer;void pointer

# include <stdio.h>

int main()
{
    int *p=NULL;
    int x=20;
    
    printf("The value stored in p is %d \n",p);
    // printf("The value stored in memory location of p is %d\n",*p);

    p=&x;
    printf("The value stored in p ie address of x is %d \n",p);
    printf("The value stored in memory location of p is %d \n",*p);
    printf("Dereferenced value of p is %d \n",*p);

    void *ptr;
    int a=8;
    ptr=&a;
    printf("The value stored in pointer ptr is %d \n",*(int*)ptr);//type casting void to int and deference
    // printf("The deferenced value stored in pointer is %d \n"*ptr);
    char ch='b';
    ptr=&ch;
    printf("The  value stored in ptr is %c \n",*(char*)ptr);//char type casting void to char and deference


    // printf("Test program \n ");
}
