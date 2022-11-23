/*	Autor: XXX		Fecha de creación: XXX  */

/*
**	ENUNCIADO DEL PROGRAMA
**	Se desea ..........
**
*/

#include <stdio.h>

int pideNumEntreRango(int min, int max);
void inicializarVector(int array[], int numE);
void pintaVector(int v[], int numE);
float mediaArray(int v[], int numE);

int pideNumEntreRango(int min, int max)
{
	int num;
	do
	{
		printf("Introduce un numero entre %i y %i: ", min, max);
		scanf("%i", &num);
	} while (num < min || num > max);

	return num;
}

void inicializarVector(int array[], int numE)
{
	printf("INICIALIZANDO VECTOR:");
	int valor;
	for (int i = 0; i < numE; i++)
	{
		printf("Introduce un valor para la posicion %i del array", i);
		scanf("%i", &valor);
		array[i] = valor;
	}

	printf("Array inicializado.\n");
}

void pintaVector(int v[], int numE)
{
	printf("VALORES DEL ARRAY:\n");
	for (int i = 0; i < numE; i++)
	{
		printf("v[%i]=%i", i, v[i]);
	}
}
float mediaArray(int v[], int numE)
{

	int suma;

	for (int i = 0; i < numE; i++)
	{
		suma += v[i];
	}

	return (float)suma / numE;
}

int main()
{
	printf("BIENVENIDOS AL PROGRAMA ARRAY MEDIA:\n");

	int numE = pideNumEntreRango(1, 10);

	int v[numE];
	inicializarVector(v, numE);

	pintaVector(v, numE);
	float media = mediaArray(v, numE);
	printf("La media de los valores del array es: %f", media);
}
