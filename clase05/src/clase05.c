/*
 ============================================================================
 Name        : clase05.c
 Author      : lore
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


#define QTY_EMPLEADOS 1000
int imprimeArrayInt(int array[],int limite);

int initArrayInt(int array[],int limite,int valor);

int getArrayInt( int array[],
		         int limite,
			     char *mensaje,
			     char *mensajeError,
			     int minimo,
			     int maximo,
			     int reintentos);

int maximoArrayInt(int array[],
		           int limite,
				   int cantidadElementos,
				   int *pResultado);

int minimoArrayInt(int array[],
		           int limite,
				   int cantidadElementos,
				   int *pResultado);

int promedioArrayInt(int array[],
		             int limite,
					 int cantidadElementos,
					 float *pResultado);


int main(void)
{
	int edadesEmpleados[QTY_EMPLEADOS];

	if(initArrayInt(edadesEmpleados,QTY_EMPLEADOS,10) == 0)
	{
		imprimeArrayInt(edadesEmpleados,QTY_EMPLEADOS);
	}
	return EXIT_SUCCESS;
}

int initArrayInt(int array[],int limite,int valor )
{
	int i;
	int retorno = -1;
	if(array != NULL && limite > 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			array[i]=valor+i;
		}

	}
	return retorno;
}

int imprimeArrayInt(int array[],int limite )
{
	int i;
	int retorno = -1;
	if(array != NULL && limite > 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			printf("%d\n",array[i]);
		}

	}
	return retorno;
}

int getArrayInt( int array[],
		         int limite,
			     char *mensaje,
			     char *mensajeError,
			     int minimo,
			     int maximo,
			     int reintentos)
{
	    int i;
	    char respuesta = 'n';
		int retorno = -1;
		if(array != NULL && limite > 0)
		{
			do
			{
				getInt(&array[i],mensaje,mensajeError,minimo, maximo,reintentos);
			}while(respuesta == 's')

		}
		return retorno;


}

int maximoArrayInt(int array[],
		           int limite,
				   int cantidadElementos,
				   int *pResultado)
{


}
