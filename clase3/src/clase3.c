/*
 ============================================================================
 Name        : clase3.c
 Author      : lore
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int calculaMaximoMinimoPromedio(int *maximo, int *minimo, float *promedio, int cantidad);

int main(void) {
	int maximo;
	int minimo;
	float promedio;
	int cantidad;

	/*printf("Ingrese la cantidad de casos ");
	scanf("%d", &cantidad);*/
	if (getInt(&cantidad,"Ingrese la cantidad de casos\n ", "Error",0,100,2)==-1)
	{
		printf("La cantidad es incorrecta");
		return EXIT_FAILURE;
	}


	if(calculaMaximoMinimoPromedio(&maximo, &minimo, &promedio, cantidad) == 0){
		printf("El maximo es %d el minimo es %d el promedio es %f", maximo, minimo, promedio);
	}
	return EXIT_SUCCESS;
}

int calculaMaximoMinimoPromedio(int *maximo, int *minimo, float *promedio, int cantidad){
	int retorno = -1;
	int flag = 0;
	int numero;
	int i;
	int suma = 0;
	int maximoTemp;
	int minimoTemp;

	for(i = 0; i < cantidad; i++){
		printf("Ingrese un numero\n");
		scanf("%d", &numero);

		suma += numero;

		if(flag == 0){
			flag = 1;
			maximoTemp = numero;
			minimoTemp = numero;
		}else if(numero > maximoTemp){
			maximoTemp = numero;
		}else if(numero < minimoTemp){
			minimoTemp = numero;
		}

	}

	*maximo = maximoTemp;
	*minimo = minimoTemp;
	*promedio = (float)suma / cantidad;
	retorno = 0;

	return retorno;
}
