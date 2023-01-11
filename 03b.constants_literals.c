// Example for constants and literals in embedded C

# include<stdio.h>

int main()
{
    // Decimal contant no prefix used
    int a=123;  
    // hexaDecimal contant  prefix used 0x  
    int b=0x7f;
    // octal contant  prefix used 0x

    int c =0177;
    printf("The decimal constant is %d \n",a);
    printf("The hexadecimal constant is %d \n",b);
    printf("The octal constant is %d \n",c);



}