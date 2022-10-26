#include <stdio.h>

int main(){
    int lastNum;

    printf("Cual debe de ser el ultimo numero? ");
    scanf("%i", &lastNum);

    printf("Respuesta: ");

    for(int i = 1; i < lastNum; ++i){
        printf("%i, ", i);
    }

    printf("%i", lastNum);

    return 0;
}