#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    srand(time(NULL));
    int array[10];
    int numbers;
    int total;

    printf("Inserta un numero entre el 1 y el 10: ");
    scanf("%i", &numbers);

    for(int i=0; i < numbers; ++i){
        array[i] = rand()%5;
        total = array[i];
    }

    printf("Media: %f", (float)total /numbers);

    return 0;
}
