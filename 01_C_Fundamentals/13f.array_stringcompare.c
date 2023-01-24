// example for string compare, identify upper/lower character, replace a character

# include<stdio.h>
# include<string.h>
# include<ctype.h>

int main()
{
    //  print a character array
    char s[]="This is a c program ";
    printf(" %s \n ",s);

    //  compare two arrays
    char s1[50]="123";
    char s2[50]="123";


    if (strcmp(s1,s2)== 0)
     printf("The strings are similar \n");
    else 
    printf("The strings are not equal because of strcat operation \n");

    strcat(s1,s2);
  
    printf("The concatenated string is = %s \n",s1);


     if (strcmp(s1,s2)== 0)
     printf("The strings are similar \n");
    else 
    printf("The strings are not equal because of strcat operation \n");
    




    return 0;
}
