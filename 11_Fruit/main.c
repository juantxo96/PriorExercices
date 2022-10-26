#include <stdio.h>

int main()
{
    const int numberOfFruits;
    printf("Inserta un numero de frutas: ");
    scanf("%i", &numberOfFruits);

    char fruits[numberOfFruits][20];

    for(int i = 0; i < numberOfFruits; ++i){
        printf("Inserta el nombre de la fruta: ");
        scanf("%s", &fruits[i]);
    }

    return 0;
}
