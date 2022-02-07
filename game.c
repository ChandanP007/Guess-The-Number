// Guess the random number between 1 to 100

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Random number generator
    int number;
    srand(time(0));
    number = rand()%100+1; //random number between 1 and 100
    // printf("Random Number : %d\n",number);


    int guess,nGuess=1;
        printf("--------------------------------------");
        printf("\nGuess the number between 1 and 100\n");
        printf("--------------------------------------");
    do{
        printf("\nEnter your number : ");
        scanf("\n%d",&guess);

        if(guess>number)
            printf("Lower number please!\n");
        else if(guess<number)
            printf("Higher number please!\n");
        else
            printf("\nCongratulations! You guessed it in %d attempts",nGuess);
        nGuess++;
    }while(guess!=number);


    return 0;
}