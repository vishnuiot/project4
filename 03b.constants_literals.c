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
    printf("The hexadecimal constant is %x \n",b);
    printf("The octal constant is %o \n",c);
    // character constant
    char m='a';
    printf("The character constant is %c \n",m);
    // String constant followed by a terminatin character \0
    char mystring[10]={'a','b','c','\0'};
    printf("The character string constant is %s \n",mystring);



}