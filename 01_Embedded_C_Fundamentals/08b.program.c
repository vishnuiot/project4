// introduce stdbool for true 

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int number =5;

    if (number==4)
    {
        printf("The number is %d \n",number);
        printf("The statement is within the if statement \n");
    }
    
    printf("This is outside the scope of if statement \n");
    return 0;
}