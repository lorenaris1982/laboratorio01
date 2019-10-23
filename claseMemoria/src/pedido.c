/*
 * pedido.c
 *
 *  Created on: 22 oct. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdlib.h>
#include "pedido.h"

Pedido* new_cliente(Pedido* this)
{
	int retorno= -1;

	if(this != NULL)
	{
		malloc(sizeof(Pedido));
		retorno = 0;
	}

	return retorno;
}

Pedido delete_cliente(Pedido* this)
{
	int retorno = -1;

	if(this != NULL)
	{
		free(sizeof(this));
		retorno =0;
	}
	return retorno;
}
