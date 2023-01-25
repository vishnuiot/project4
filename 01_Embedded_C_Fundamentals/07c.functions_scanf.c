// example for functions with scanf and mapping the input values
// call by value

#include<stdio.h>

int mathadd(int n1,int n2);
int n1,n2,result;
int main()
{
    printf("Enter two numbers \n");
    scanf("%d, %d",&n1,&n2);
    printf("The entered numbers address are  %d & %d \n",n1,n2);
    int sum=mathadd(n1,n2);
    printf("The addition of two numbers is %d \n ",sum);
}

    


int mathadd(int a,int b)
{
    int sum=a+b;
    return sum;
}
