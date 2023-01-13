//  Memory storage for arrays


#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int i=0;
    for (i=0;i<5;i++)
    {
        printf("The value of i is %d  and address of i is %d \n",a[i],&a[i]);
        // printf("The address of i is %d \n",&a[i]);
    }

// array operations
    int array[]={100,200,300,400,500};
    int total=0;

    for (int i=0;i<5;i++)
    total+=array[i];
    printf("The total is %d \n",total);
    printf("The average of array is %d \n",total/5);
// character operations
    char b[5]={"a""b""c""d""e"};
    int j;
    for (j=0;j<5;j++)
    {
        printf("The value of j is %c  and address of j is %d \n",b[j],&b[j]);
        // printf("The address of j is %d \n",&b[j]);

    }

    
    // printf(" Test program \n");
}
