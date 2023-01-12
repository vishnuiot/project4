// C program to guess a number

#include<stdio.h>

int main()
{
    int guess_a_number;
    int given_number=3;
    int i;
    printf("you will have three options to guess the correct no  \n ");
    printf("guess a no between 1 and 10 \n ");


    for (i=0;i<3;i++){
        printf("Guess chance no %d \n",i+1);
        scanf("%d",&guess_a_number);
        printf("The guessed no is %d \n",guess_a_number);
            if (guess_a_number == given_number)
            {
                printf("You guessed the right number \n");
                break;
            }

            else
            {
                printf("Your guess is wrong .. pl try again \n");
            }

    }

    return 0;
}