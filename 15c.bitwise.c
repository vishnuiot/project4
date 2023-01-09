// bit wise operands
//  left shift <<, right shift >>, bit wise and &, bit wise or |,bitwise compliment ~,
// bit wise xor ^

#include<stdio.h>

int main()
{
    int a=60,b=0,c=1,d=1;
    printf("The value of bitwise AND is = %d \n",a&b);// truth table output a&b
    printf("The value of bitwise AND is = %d \n",c&d);// truth table output a&b
    printf("The value of bitwise OR is = %d \n",b|a);// truth table output a&b

    // 
    int e=10,f=20;
    printf("The value of bitwise AND is = %d \n",e&f);// truth table output a&b

    printf("60 left shift twice = %d \n",a<<2);
    printf("60 right shift twice = %d \n",a>>2);

    return 0;
}