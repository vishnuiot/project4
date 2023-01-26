// pass by reference or pass by pointer
int addone(int *a, int *b, int *c);
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a = 1, b = 2, c = 3;
    int d[] = {1, 2, 3};
    printf("The input variables are  a = %d ,b= %d ,c= %d \n", a, b, c);

    addone(&a, &b, &c);
    printf("The added values by pointer are %d %d %d \n", a, b, c);

    addarray(d, 3);
    for (int i = 0; i < 3; i++)
    {
        printf("The incremented array values are d[%d]=d[%d] \n", i, d[i]);
    }

    return 0;
}

int addone(int *a, int *b, int *c)
{
    *a = *a + 1;
    *b = *b + 1;
    *c = *c + 1;
}

int addarray(int d[], int length)
{
    for (int i = 0; i < length; i++)
    {
        d[i] += 1;
    }
}