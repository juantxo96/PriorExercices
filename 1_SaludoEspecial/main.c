#include <stdio.h>
#include <stdlib.h>

int pideNumEntreRango(int min, int max);
void saludoEspecial(int num);

int pideNumEntreRango(int min, int max)
{
    int number;
    do
    {
        printf("Introduce un numero entre %i y %i: ", min, max);
        scanf("%d", &number);
    } while (number < min || number > max);

    return number;
}

void saludoEspecial(int num)
{
    switch (num)
    {
    case 1:
        printf("Buenos dias.");
        break;

    case 2:
        printf("Buenas tardes.\n");
        break;

    case 3:
        printf("Buenas noches.\n");
        break;

    default:
        printf("Hasta pronto.\n");
        break;
    }
}

int main()
{
    int number;
    char ch;
    do
    {
        printf("BIENVENIDOS AL PROGRAMA SALUDO ESPECIAL:\n");

        number = pideNumEntreRango(0, 3);

        saludoEspecial(number);

        getchar();
        system("clear");
    } while (number != 0);

    return 0;
}