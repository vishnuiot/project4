//  passing the memory array address

int addone(int array[],int y);
#include <stdio.h>
int main()
{
    int a[] = {1,2,3,4,5};
    printf("a:%p \n",a);
    addone(a,4);
    return 0;
}

int addone(int array[],int y)
{
    printf("The array address is %p \n",array);
    return 0;
}