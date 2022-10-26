#include <stdio.h>

int main()
{
    int array[6];
    int evens = 0;
    int evensSum = 0;
    int totalSum = 0;

    array[0] = 4;
    array[1] = 3;
    array[2] = 5;
    array[3] = 6;
    array[4] = 2;
    array[5] = 10;

    for(int i = 0; i < 6; ++i){
        printf("v[%i]=%i\n", i, array[i]);

        if(array[i] % 2 == 0){
            evens++;
            evensSum += array[i];
        }

        totalSum += array[i];
    }

    printf("Pares: %i;\nSuma pares: %i\nSuma total: %i\n", evens, evensSum, totalSum);

    int tempValue = array[0];
    array[0]= array[5];
    array[5] = tempValue;

    for(int i = 0; i < 6; ++i){
        printf("v[%i]=%i\n", i, array[i]);
    }

    return 0;
}
