//  Example for pre processor : macro and macroexpansion(max_num 25)

#include <stdio.h>
# define max_num 25
# define max_iterations 10
# define no_of_sensors 5

int main()
{
    int i;
    printf("The value of max_num is %d \n",max_num);

    for (i=0;i<max_iterations;i++)
    {
        printf("The printed values is %d \n",i);
    }

    int sensors[no_of_sensors];
    {
        int i;
        for(i=0;i<no_of_sensors;i++)
        {
            printf("The temperature sensor %d \n",i);
        } 
    }

    return 0;
}