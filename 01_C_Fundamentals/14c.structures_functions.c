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
    int i;
    struct book b[3];

    b[0].pageno=10;
    b[0].chapterno=100.10;
    b[0].price=45.43;

    b[1].pageno=20;
    b[1].chapterno=200.10;
    b[1].price=87.43;

    b[2].pageno=40;
    b[2].chapterno=600.10;
    b[2].price=127.43;

    for (i=0;i<3;i++)
    {
    printf("The address of book %d=%d\n",i,&b[i]);
    printf("The page no of book %d =%d \n",i,b[i].pageno);
    printf("The chapter no of book %d =%f \n",i,b[i].chapterno);
    printf("The price no of book %d =%f \n",i,b[i].price);
    }

    display(&b[0]);
    return 0;
}

void display(struct book *b_ptr){
    printf("The page no of book  =%d \n",b_ptr->pageno);
    printf("The chapter no of book  =%f \n",b_ptr->chapterno);
    printf("The price no of book  =%f \n",b_ptr->price);

    // change the pointer values
    b_ptr->pageno=9000;

    printf("The page no of book  =%d \n",b_ptr->pageno);
    printf("The chapter no of book  =%f \n",b_ptr->chapterno);
    printf("The price no of book  =%f \n",b_ptr->price);

}