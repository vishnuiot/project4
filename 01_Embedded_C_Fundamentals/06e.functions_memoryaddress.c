//  memory address in C
void addone(int a[], int length);
int length=6;
#include <stdio.h>

int main()
{

    int a[] = {1, 2, 3, 4, 5,6};
    printf("The memory ddress of array a = %p \n", a);
    addone(a,6);
}

void addone(int a[], int length)
{
    for (int i=0;i<length;i++)
    {
        printf(" a[%d]=%d \n",i,a[i]+1);
    }
}