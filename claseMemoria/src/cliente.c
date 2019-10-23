/*
 * cliente.c
 *
 *  Created on: 22 oct. 2019
 *      Author: alumno
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"

static int isValidNombre(char *nombre);
static int isValidDireccion(char *direccion);
static int isValidCuit(char *cuit);
static int isValidLocalidad(char *localidad);


Cliente* new_cliente()
{
	{
		return malloc(sizeof(Cliente));
	}
}

void delete_cliente(Cliente* this)
{
	{
		free(this);
	}
}

int cli_setNombre(Cliente* this, char* nombre)
{
	int retorno =-1;

	if(this != NULL && isValidNombre(nombre))
	{
		strcpy(this->nombre,nombre);
		retorno = 0;
	}
	return retorno;
}

static int isValidNombre(char *nombre)
{

	return 1;
}

int cli_setDireccion(Cliente* this, char* direccion)
{
	int retorno =-1;

	if(this != NULL && isValidDireccion(direccion))
	{
		strcpy(this->direccion,direccion);
		retorno = 0;
	}
	return retorno;
}

static int isValidDireccion(char *direccion)
{
	return 1;
}

int cli_setCuit(Cliente* this, char* cuit)
{
	int retorno =-1;

	if(this != NULL && isValidCuit(cuit))
	{
		strcpy(this->cuit,cuit);
		retorno = 0;
	}
	return retorno;
}

static int isValidCuit(char *cuit)
{
	return 1;
}

int cli_setLocalidad(Cliente* this, char* localidad)
{
	int retorno =-1;

	if(this != NULL && isValidLocalidad(localidad))
	{
		strcpy(this->cuit,localidad);
		retorno = 0;
	}
	return retorno;
}

static int isValidLocalidad(char *localidad)
{
	return 1;
}

Cliente* new_clientePorParametro(char* nombre,char* direccion,char* cuit,char* localidad)
{
	Cliente* retorno = NULL;
	Cliente* this;
	this = new_cliente();
    if(this != NULL)
    {
    	if(cli_setNombre(this,nombre)== 0 && cli_setDireccion(this,direccion)== 0
    			cli_setCuit(this,cuit)== 0 && cli_setLocalidad(this,localidad)== 0)
    	{
    		retorno = this;
    	}else
    	{
    		delete_cliente(this);
    	}

    }
	return retorno;
}

/*
 * int cli_getEdad (Cliente* this, int* edad)
 * {
 * int retorno = -1;
 * if((this!=NULL && edad != NULL)
 * {
 * *edad=this->edad;
 * retorno = 0;
 * }
 * return retorno;
 * }
 */


