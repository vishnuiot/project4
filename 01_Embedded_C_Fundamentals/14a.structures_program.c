//  Example for structures

#include <stdio.h>
#include<stdlib.h>

struct book
{
    int pageno;             // member variabels
    float chapterno;
    float price;
};

int main()
{
    struct book b1,b2,b3;        //

    b1.pageno=10;
    b1.chapterno=100.10;
    b1.price=45.43;

    b2.pageno=20;
    b2.chapterno=200.10;
    b2.price=87.43;

    b3.pageno=40;
    b3.chapterno=600.10;
    b3.price=127.43;

    printf("The page no of book 1 =%d \n",b1.pageno);
    printf("The chapter no of book 1 =%f \n",b1.chapterno);
    printf("The price no of book 1 =%f \n",b1.price);

    printf("The page no of book 2 =%d \n",b2.pageno);
    printf("The chapter no of book 2 =%f \n",b2.chapterno);
    printf("The price no of book 2 =%f \n",b2.price);   

    printf("The page no of book 3 =%d \n",b3.pageno);
    printf("The chapter no of book 3 =%f \n",b3.chapterno);
    printf("The price no of book 3 =%f \n",b3.price); 
    // printf("check program \n");
    return 0;
}