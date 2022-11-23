/*	Autor: XXX		Fecha de creación: XXX  */

/*
**	Crea un programa en C que pida al usuario valores a dos variables mediante una función llamada “pedirNumero”.
Hay que hacer una llamada a la función por cada inicialización de la variable. No deben estar controlados.
Posteriormente, crea un procedimiento en C llamado “intercambioVariables“ que intercambie el valor de las dos
variables que pasaremos como parámetros y que previamente hemos introducido por teclado.
Se deben intercambiar los valores entre las variables y no mostrar las variables al revés.
Se debe mostrar el valor de las variables antes del cambio y posterior al cambio directamente con printf en el main.
**
*/

#include <stdio.h>

int pedirNumero();
void intercambioVariables(int *num1, int *num2);

int pedirNumero()
{
	int num;
	printf("\nIntroduce un numero:");
	scanf("%i", &num);
	return num;
}

void intercambioVariables(int *num1, int *num2)
{
	int aux;
	aux = *num1;
	*num1 = *num2;
	*num2 = aux;
}

int main()
{

	int num1, num2;

	printf("BIENVENIDOS AL PROGRAMA INTERCAMBIO DE VARIABLES:\n");
	num1 = pedirNumero();
	num2 = pedirNumero();
	intercambioVariables(&num1, &num2);
	printf("\n\nNUMEROS DESPUES DEL INTERCAMBIO:\n");
	printf("\nNUM1:%i\nNUM2:%i", num1, num2);

	getch();
	system("pause");
	return 0;
}
