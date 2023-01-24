// pass by reference

#include<stdio.h>

int main()
{
    int a=1,b=2,c=3;
    addone(&a,&b,&c);
    printf("The answer  a is %d ,%d ,%d \n",a,b,c);     
    return 0;
}

int addone(int *a,int *b,int *c)
{
*a=*a+1;
*b=*b+1;
*c=*c+1;

}