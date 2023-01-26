// Important example for memory address operations in C

int addone(int array[],int y);
#include <stdio.h>
int main()
{
    int a[] = {1,2,3,4,5};
    printf("The array address from main a:   %p \n",a);
    addone(a,4);
    return 0;
}

int addone(int array[],int y)
{
    printf("The array address from function: %p \n",array);
    return 0;
}