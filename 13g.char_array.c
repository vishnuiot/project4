// Example for character array without null pointer

#include <stdio.h>

int main()
{
    char s[10];
    printf("Enter a set of characters \n");
    scanf("%s",&s);
    printf("%s \n",s);

    int i=0;
    for (i=0;i<9;i++)
    {
        printf("%c \n",s[i]);
    }

    return 0;
}