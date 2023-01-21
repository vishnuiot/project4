// pass by reference

#include<stdio.h>

int main()
{
    int a=1,b=2,c=3;
    printf("The answer is %d \n",addone(&a,&b,&c));
    return 0;
}

int addone(int *a,int *b,int *c)
{
*a=*a+1;
}