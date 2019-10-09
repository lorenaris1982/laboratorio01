/*
 * fantasma.c
 *
 *  Created on: 9 oct. 2019
 *      Author: lorena
 */
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "fantasma.h"
#include "utn.h"

#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1

static int generarId(void)
{
	static int idUnico = 0;
	idUnico++;
	return idUnico;
}

int fantasma_initLugarLibre(sFantasma *aArray, int cantidad)
{

	int i;
	int retorno = -1;

	if(aArray!=NULL && cantidad>0){

		for(i=0;i<cantidad;i++){

			aArray[i].status = STATUS_EMPTY;

		}
		retorno=0;
	}

 return retorno;
}

int fantasma_buscarLugarLibre(sFantasma *aArray, int cantidad){

	int index = -1;
	int i;

	if(aArray!=NULL && cantidad>0){

		for(i=0;i<cantidad;i++){

			if(aArray[i].status == STATUS_EMPTY){

				index = i;
				break;
			}
		}
	}
	return index;
}

int fantasma_buscarPorId(sFantasma *aArray, int cantidad,int id)
{
	int retorno = -1;
	int i;
	if(aArray!=NULL && cantidad > 0 )
	{
		for(i=0;i<cantidad;i++)
		{
			if(aArray[i].idUnico == id && aArray[i].status == STATUS_NOT_EMPTY)
			{
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}

int fantasma_altaPorId(sFantasma *aArray, int cantidad,sFantasma item)
{
	int retorno = -1;
	int index;
	if(aArray!=NULL && cantidad>0)
	{
		index = fantasma_buscarLugarLibre(aArray, cantidad);
		if(index>=0)
		{
			aArray[index] = item;
			aArray[index].status = STATUS_NOT_EMPTY;
			aArray[index].idUnico = generarId();
			retorno = 0;
		}
	}
	return retorno;
}

int fantasma_bajaPorId(sFantasma *aArray, int cantidad,int id)
{
	int retorno = -1;
	int index;
	if(aArray!=NULL && cantidad > 0)
	{
		index = fantasma_buscarPorId(aArray, cantidad, id);
		if(index != -1)
		{
			aArray[index].status = STATUS_EMPTY;
			retorno = 0;
		}
	}
	return retorno;
}

int fantasma_modificarPorId(sFantasma *aArray, int cantidad,sFantasma item)
{
	int retorno = -1;
	int index;
	if(aArray!=NULL && cantidad>0)
	{
		index = fantasma_buscarPorId(aArray, cantidad, item.idUnico);
		if(index!=-1)
		{
			aArray[index] = item;
			aArray[index].status = STATUS_NOT_EMPTY;
			retorno = 0;
		}
	}
	return retorno;
}

int fantasma_listar(sFantasma *aArray, int cantidad)
{
	int i;
	int retorno = -1;
	if(aArray != NULL && cantidad>0)
	{
		retorno = 0;
		printf("id     Nombre    Direccion    Precio     Tipo\n");
		for(i=0;i<cantidad;i++)
		{
			if(aArray[i].status == STATUS_NOT_EMPTY)
			{
				printf("%d -- %s -- %d -- %f -- %d \n",aArray[i].idUnico,aArray[i].nombre,aArray[i].direccion,aArray[i].precio,aArray[i].tipo);
			}

		}
	}
	return retorno;
}

int fantasma_Ordenar(sFantasma *aArray, int cantidad)
{
	int i;
	int retorno = -1;
	struct sFantasma buffer;
	int fSwap;
	if(aArray != NULL && cantidad>0)
	{
		retorno = 0;
		do
		{
			fSwap = 0;
			for(i=0;i<cantidad-1;i++)
			{
				if(strncmp(aArray[i].nombre,aArray[i+1].nombre,QTY_CARACTERES)>0)
				{
					fSwap = 1;
					buffer = aArray[i];
					aArray[i]=aArray[i+1];
					aArray[i+1]=buffer;
				}
				else if(strncmp(aArray[i].nombre,aArray[i+1].nombre,QTY_CARACTERES)==0)
				{
					if(strncmp(aArray[i].apellido,aArray[i+1].apellido,QTY_CARACTERES)>0)
					{
						fSwap = 1;
						buffer = aArray[i];
						aArray[i]=aArray[i+1];
						aArray[i+1]=buffer;
					}
				}
			}
		}while(fSwap);
	}
	return retorno;
}


