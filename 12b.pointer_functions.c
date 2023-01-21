// pass by reference

#include<stdio.h>

int main()
{
    int a=1,b=2,c=3;
    
    return 0;
}

int addone(int *a,int *b,int *c)
{
*a=*a+1;
printf("The answer is %p \n",addone(&a,&b,&c));

}