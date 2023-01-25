// Example program for static and external class storage specifiers

// static and extern global variable

#include <stdio.h>
void  mathadd();
//  Storage in RAM's READ /Write storage area
int global_data=100;  


int main()
{
   
    printf("The global data is %d \n",global_data);
     mathadd();
     mathadd();
     mathadd();
    printf("Again the global data is %d \n",global_data);
    return 0;
}

void  mathadd()
{
//  local variables are Stored in RAM's register/stack area
 static int local_data=50;
 local_data=local_data+1;
 printf("The local data is %d \n",local_data);
//  return global_data;
}