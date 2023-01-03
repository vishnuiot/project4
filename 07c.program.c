// example for functions with scanf

#include<stdio.h>

int mathadd(int n1,int n2);
int result;
int main()
{
    printf("Enter two numbers \n");
    scanf("%d %d,&n1,&n2");
    printf("The entered numbers address are \n");
    result=mathadd(n1,n2);
    printf("The sum of two numbers is %d ",result);
    return 0;
}

int mathadd(int n1,int n2)
{
    int sum=n1+n2;
    return sum;
}
