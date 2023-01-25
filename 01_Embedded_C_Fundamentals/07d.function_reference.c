//  function by reference

# include <stdio.h>


int mathadd(int a,int b);
int mathsub(n1,n2);
int pointer_fun(int *,int *);
int add_sub(int *n1,int *n2, int *sum, int *sub);

void main()
{
    int result;
    int n1,n2,sum,sub;
    printf("Enter two numbers seperated by ,\n");
    scanf("%d,%d",&n1,&n2);
    printf ("The two numbers are %d ,%d  \n",n1,n2);
    mathadd(n1,n2);
    mathsub(n1,n2);
    pointer_fun(&n1,&n2);
    add_sub(&n1,&n2,&sum,&sub);
    return 0;
}

int mathadd(int a,int b)
{
    int result=a+b;
    printf ("The sum of two numbers is %d  \n",result);
    
}

int mathsub(int a,int b)
{
    int result=a-b;
    printf ("The difference of two numbers is %d  \n",result);
    // return  result;
}

int pointer_fun(int *ptr_n1,int *ptr_n2)
{
    printf("The  values of two numbers are %d and %d \n",*ptr_n1,*ptr_n2);
    *ptr_n1=556;
    printf("The  replaced values are %d and %d \n",*ptr_n1,*ptr_n2);

}
int add_sub(int *ptr_n1,int *ptr_n2,int *sum,int *sub)
{
    printf("The  values of two numbers are %d and %d \n",*ptr_n1,*ptr_n2);
    *sum=*ptr_n1+*ptr_n2;
    *sub=*ptr_n1-*ptr_n2;
    printf ("The sum of two numbers is %d  \n",*sum);
    printf ("The difference of two numbers is %d  \n",*sub);
    
}