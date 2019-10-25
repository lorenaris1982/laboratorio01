/*
 ============================================================================
 Name        : clase18.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "clientes.h"
int main(void)
{
	Cliente * listaClientes[1000];
	int posicion=0;
	FILE *pFile;
	int r;
	int id;
	int status;
	char cuit[50];
	char nombre[50];
	char localidad[50];
	char domicilio[50];
	char var5[50];
	pFile = fopen("clientes.txt","r");
	if(pFile == NULL)
	{
		printf("El archivo no existe");
		exit(EXIT_FAILURE);
	}
	do
	{
		r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,cuit,localidad,domicilio);
		if(r==5)
			printf("Lei: %d %s %s %s %s\n",id,nombre,cuit,localidad,domicilio);
		    //hacer un new para generar un cliente
		    // cargar los campos con los datos
		    // guardar  la addr en la lista

		int id=atoi (id);
		Cliente* pc =new_clientePorParametro(&id,nombre,cuit,localidad,domicilio);
				if(pc!=NULL)
				{
					listaClientes[posicion] = pc;
					posicion ++;
					if(posicion>=1000)
						break;
				}

		else
			break;
	}while(!feof(pFile));
	fclose(pFile);
	exit(EXIT_SUCCESS);
}
