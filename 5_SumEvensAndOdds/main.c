#include <stdio.h>

int main(){
    int maxNumbers = 10;
    int evensSum = 0;
    int oddsSum = 0;
    int number;

    for(int i = 0; i < maxNumbers; ++i){
        printf("Inserta un numero: ");
        scanf("%i", &number);

        if(number % 2 == 0)
            evensSum += number;
        else
            oddsSum += number;
    }

    printf("Suma pares: %i; Suma impares: %i", evensSum, oddsSum);

    return 0;
}