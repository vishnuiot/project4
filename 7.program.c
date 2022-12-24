// static and external function specifier

// static and extern global variable

#include <stdio.h>
void  mathadd();
void  mathmul();
// int b=10;
int global_data=100;
int a;
int main()
{
    printf("The global data is %d \n",global_data);
    mathadd();
    mathadd();
    mathadd();
    mathmul();
    printf("The external int value from function mathmul is %d \n",a);
    
    return 0;
}

void  mathadd()
{
 static int local_data=50;
 local_data=local_data+1;
 printf("The local data is %d \n",local_data);
//  return global_data;
}



