// calculate raise by power
int mult(int x, int y);
int power(int x,int n);
#include <stdio.h>
int main()
{
    printf("The multiplied value is %d \n", mult(5, 7));
    printf("The power of the number is %d \n",power(5,3));
    return 0;
}

int mult(int x, int y)
{
    int result = x * y;
    return result;
}

int power(int x,int n){
    int value =x;
    printf("The number for which power is to be calculated is %d \n",value);
    for (int i=1;i<n;i++){
        value=mult(value,x);
    }
    return value;
    return 0;

}