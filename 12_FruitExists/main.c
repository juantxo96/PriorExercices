#include <stdio.h>
#include <string.h>

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

    char article[20];
    printf("Inserta una fruta a buscar: ");
    scanf("%s", &article);

    int i;

    for(i = 0; i < numberOfFruits && strcmp(article, fruits[i]) != 0; ++i){
    }

    if(i == numberOfFruits){
        printf("La fruta no esta en la lista");
    }
    else{
        printf("La fruta esta en la lista");
    }

    return 0;
}
