#include <stdio.h>
#include <stdlib.h>

int pideNumEntreRango(int min, int max);
void pintaTablaMultiplicar(int num);

int pideNumEntreRango(int min, int max)
{
    int number;
    do
    {
        printf("Introduce un numero entre %i y %i: ", min, max);
        scanf("%i", &number);
    } while (number < min || number > max);

    return number;
}

void pintaTablaMultiplicar(int number)
{
    printf("Tabla de multiplicar del %i:\n", number);

    for (int i = 1; i <= 10; i++)
    {
        printf("%i x %i = %i\n", number, i, number * i);
    }
}

int main()
{
    printf("BIENVENIDOS A LA TABLA DE MULTIPLICAR:\n");

    int number = pideNumEntreRango(1, 10);

    pintaTablaMultiplicar(number);

    return 0;
}