#include <stdio.h>

int getNumber();

int main(){
    int maxNumbers = 100;
    int max = 0;
    int min = 0;
    int number;

    number = getNumber();

    if(number != 0){
        max = number;
        min = number;

        number = getNumber();

        for(int i = 1; i < maxNumbers && number != 0; ++i){
            if(max < number)
                max = number;
            if(min > number)
                min = number;

            number = getNumber();
        }
        
        printf("Respuesta: Maximo %i; Minimo: %i", max, min);
    }
    else
        printf("Nombres introducidos por el usuario: 0\nRespuesta: no se ha introducido ningun valor correcto");

    return 0;
}

int getNumber(){
    int number;

    printf("Inserta un numero: ");
    scanf("%i", &number);

    return number;
}