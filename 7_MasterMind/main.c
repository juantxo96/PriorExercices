#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int getGuess();

int main(){
    srand(time(NULL));
    int randomNumber = rand()%9999 + 1000;
    int numOfTries;
    int guess;

    printf("Inserta el numero de intentos: ");
    scanf("%i", &numOfTries);

    guess = getGuess();

    for(int i = 1; i < numOfTries && guess != randomNumber; ++i){
        guess = getGuess();
    }

    if(guess == randomNumber){
        
        printf("Felicidades has acertado el numero: %i", randomNumber);
    }
    else
        printf("Has perdido! Te has quedado sin intentos.\nEl numero era: %i", randomNumber);

    return 0;
}

int getGuess(){
    int guess;

    printf("Inserta un numero: ");
    scanf("%i", &guess);

    return guess;
}