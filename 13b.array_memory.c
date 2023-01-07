//  Memory storage for arrays


#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i=0;
    for (i=0;i<5;i++)
    {
        printf("The value of i is %d \n",a[i]);
        printf("The address of i is %d \n",&a[i]);
    }

    char b[5]={"a","b"};
    int j=0;
    for (j=0;j<5;j++)
    {
        printf("The value of j is %s \n",b[j]);
        printf("The address of j is %d \n",&b[j]);


    }

    
    // printf(" Test program \n");
}
