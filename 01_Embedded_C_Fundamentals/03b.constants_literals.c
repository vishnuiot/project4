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
    //  binary http://gcc.gnu.org/onlinedocs/gcc/Binary-constants.html
    int d = 0b11111111;
    printf("The decimal constant is %d \n",a);
    printf("The hexadecimal constant is %x \n",b);
    printf("The octal constant is %o \n",c);
    printf("The binary constant is %u \n",d);
    printf("The binary constant is %d \n",d);
    // character constant
    char m='a';
    printf("The character constant is %c \n",m);
    // String constant followed by a terminatin character \0
    char mystring[10]={'a','b','c','\0'};
    printf("The character string constant is %s \n",mystring);



}