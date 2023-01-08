//  function by reference

# include <stdio.h>


int mathadd(int a,int b);
int mathsub(n1,n2);
int add_sub(int *,int*, int*, int*);

void main()
{
    int result;
    int n1,n2;
    printf("Enter two numbers seperated by ,\n");
    scanf("%d,%d",&n1,&n2);
    printf ("The two numbers are %d ,%d  \n",n1,n2);
    mathadd(n1,n2);
    mathsub(n1,n2);
    
    printf ("The address two numbers are %d ,%d  \n",&n1,&n2);
    // add_sub(&n1,&n2,&sum,&sub);
    // printf ("The two numbers are %d ,%d  \n",n1,n2);
    // add_sub(int *,int*, int*, int*);
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

int add_sub(int *ptr_n1,int *ptr_n2,int *sum,int *sub)
{
    printf("The  values of two numbers are %d and %d \n",*ptr_n1,*ptr_n2);
    *ptr_n1=556;
    
}