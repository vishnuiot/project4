// Example program for static and external class storage specifiers

// static and extern global variable

#include <stdio.h>
void  mathadd();
int global_data=100;
int main()
{
   
    printf("The global data is %d \n",global_data);
     mathadd();
     mathadd();
     mathadd();
    return 0;
}

void  mathadd()
{
 static int local_data=50;
 local_data=local_data+1;
 printf("The local data is %d \n",local_data);
//  return global_data;
}