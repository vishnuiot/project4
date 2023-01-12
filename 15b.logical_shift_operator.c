// Logical operators - Truth table of AND - && ,OR || ,NOT, XOR ^, ~ ( compliment)
// << bit wise left shift,  >> right shift operator
// bit wise XOR operator ^

# include <stdio.h>
int main()
{

    int a=100,b=1000;
    //  And condition
    if ((a>b)&&(b>10)){
        printf("The AND condition is satisfied  %d \n",a>b);
    }
        
    else
    {
        printf("The AND condition is not satisfied  %d \n",a>b);
    }
    
    // OR condition

    if ((a>b)||(b>10))
    {
        printf("The OR condition is satisfied  %d \n",b>10);
    }
           else
    {
        printf("The OR condition is not satisfied  %d \n",b>10);
    } 
    
    // NOT condition

        if ((a)!=(b))
    {
        printf("The NOT condition is satisfied  %d \n",(a!=b));
    }

    if ((a))
    {
        printf("A is a non zero value \n");
    }
  

    return 0;
}

