#include <stdio.h>
#include<math.h>

int main()
{
    int decimal_number,remainder,num,base=1,binary=0,no_of_1s=0;
    printf("Enter a decimal number \n");
    scanf("%d",&num);
    decimal_number =num;
    printf("The input no is %d \n",decimal_number);
 while (num>0)
 {
    remainder=num%2;
    // count no of 1's
    if (remainder==1)
    {
        no_of_1s++;
    }
    binary=binary+remainder*base;
    num=num/2;
    base=base*10;
 }
 printf("The input no is %d \n",decimal_number);
 printf("Its binary equivalent is = % d\n",binary);
return 0;
}

