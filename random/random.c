#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    const int MIN = 1;
    const int MAX = 10;
    int guess;
    int guesses = 0;
    int answer;

    //uses current time to generate a seed
    srand(time(0));

    //rand() generates between 0-32k... so use mod to make
    //the answers within 100, and then add Min as the starter (changes from 0)

    answer = (rand() % MAX) + MIN;

    do{
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if(guess > answer){
            printf("Too high\n");
        }
        else if (guess < answer){
            printf("Too low\n");
        }
        else{
            printf("Correct!");
        }
        guesses++;

    }while(guess != answer);
    
    printf("\nIt took you %d guesses to get it right!", guesses);
    
    return 0;
}