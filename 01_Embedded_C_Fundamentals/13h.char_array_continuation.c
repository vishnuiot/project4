// Example for character array with null pointer

#include<stdio.h>
#include<string.h>

int main()
{

    char s[20];

    printf("Enter a series of characters \n");
    scanf("%s",&s);
    int length=strlen(s);
    printf("The length of string is %d \n",length);
    printf("The typed values are  %s \n",s);



    return 0;
}