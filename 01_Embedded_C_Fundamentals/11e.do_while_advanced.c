// Example for step counter increment and check 
// using do-while

#include<stdio.h>

int main()
{
    float startkm;
    float step_size;
    float endkm;
    float conv;
    printf("Program to convert Km to miles \n");
    // printf("Enter starting km value \n ");
    // scanf("%f",&startkm);
    // printf("Enter step km value \n ");
    // scanf("%f",&step_size);
    // printf("Enter ending km value \n ");
    // scanf("%f",&endkm);
    

    do{
        printf("Enter starting km value \n ");
        scanf("%f",&startkm);
        if(startkm<0)printf("Please enter a value greater than zero \n");

    }    while(startkm<0);

    do{
        printf("Enter step km value \n ");
        scanf("%f",&step_size);
        if(step_size<=0)printf("Please enter a value greater than zero \n");
    }    while(step_size<=0);

        do{
        printf("Enter stop km value \n ");
        scanf("%f",&endkm);
        if(endkm<startkm) printf("Please enter a value greater than start value\n");
    }    while(endkm<startkm);

printf("start =%0.2f,step=%0.2f and end values=%0.2f \n ",startkm,step_size,endkm);
printf("The conversion table from km to miles \n");
printf("km\tmiles \n");
printf("************************\n");

for (conv=startkm;conv<=endkm;conv+=step_size)
{
    printf("%-10.2f %-10.2f \n",conv ,conv/1.6);
}

    return 0;
}