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

int fantasma_ordenarPorString(sFantasma array[],int cantidad)                              //cambiar fantasma
{
    int retorno=-1;
    int i, j;
    char bufferApellido[50];                               //cambiar campo varString
    int bufferId;
    int bufferStatus;

    int bufferTipo;                                              //cambiar buffer int
    float bufferPrecio;                                          //cambiar buffer varFloat
    char bufferNombre[50];                           //cambiar campo varLongString

    if(array!=NULL && cantidad>=0)
    {
        for (i = 1; i < cantidad; i++)
        {
            strcpy(bufferApellido,array[i].apellido);                      //cambiar campo varString
            bufferId=array[i].idUnico;                                   //cambiar campo id
            bufferStatus=array[i].status;

            bufferTipo=array[i].tipo;                                //cambiar campo varInt
            bufferPrecio=array[i].precio;                            //cambiar campo varFloat
            strcpy(bufferNombre,array[i].nombre);          //cambiar campo varLongString


            j = i - 1;
            while ((j >= 0) && strcmp(bufferApellido,array[j].apellido)<0)         //cambiar campo varString                 //Si tiene mas de un criterio se lo agrego, Ej. bufferInt<array[j].varInt
            {                                                                                                               //buffer < campo ascendente   buffer > campo descendente
                strcpy(array[j + 1].apellido,array[j].apellido);          //cambiar campo varString
                array[j + 1].idUnico=array[j].idUnico;                                //cambiar campo id
                array[j + 1].status=array[j].status;

                array[j + 1].tipo=array[j].tipo;                        //cambiar campo varInt
                array[j + 1].precio=array[j].precio;                    //cambiar campo varFloat
                strcpy(array[j + 1].nombre,array[j].nombre);  //cambiar campo varLongString

                j--;
            }
            strcpy(array[j + 1].apellido,bufferApellido);                     //cambiar campo varString
            array[j + 1].idUnico=bufferId;                                        //cambiar campo id
            array[j + 1].status=bufferStatus;

            array[j + 1].tipo=bufferTipo;                                                        //cambiar campo varInt
            array[j + 1].precio=bufferPrecio;                                                    //cambiar campo varFloat
            strcpy(array[j + 1].nombre,bufferNombre);                                  //cambiar campo varLongString
        }
        retorno=0;
    }
    return retorno;
}

