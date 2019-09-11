/*
 ============================================================================
 Name        : clase7_bis.c
 Author      : lorena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

#define QTY_NOMBRES 5
#define QTY_CARACTERES 300
#define QTY_CANTIDAD 5

int getString(	char *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos);

int imprimirArrayString(char aNombres[][QTY_CARACTERES], int cantidad);

int ordenarArrayString(char aNombres[][QTY_CARACTERES]);

int main(void) {

	int i;
	char nombre[50];
	char aNombres[QTY_NOMBRES][QTY_CARACTERES];
	int cantidad;


	for(i=0;i<=5;i++){

		//printf(aNombres);

		getString(nombre,"ingrese el nombre", "Error",1,49,2);
		strcpy(aNombres[i],nombre);
	}

	imprimirArrayString(aNombres, cantidad);
	ordenarArrayString(aNombres);


		/*for(i=0;i<5;i++){
			printf("%s", aNombres[i]);
		}*/

	return EXIT_SUCCESS;
}

int getString(	char *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos)
{
	int retorno = -1;
	char buffer[4096];
	if(	pResultado != NULL &&
		pMensaje != NULL &&
		pMensajeError != NULL &&
		minimo <= maximo &&
		reintentos >= 0)
	{
		do
			{
				printf("%s",pMensaje);
				__fpurge(stdin);
				fgets(buffer,sizeof(buffer),stdin);
				buffer[strlen(buffer)-1] = '\0';
				if(strlen(buffer)>=minimo && strlen(buffer) <= maximo)
				{
					strncpy(pResultado,buffer,maximo+1);
					retorno = 0;
					break;
				}
				printf("%s",pMensajeError);
				reintentos--;
			}while(reintentos >= 0);
	}
	return retorno;
}

int imprimirArrayString(char aNombres[][QTY_CARACTERES], int cantidad){

	int i;
	int retorno = -1;

	if(aNombres != NULL && cantidad>0){

		retorno=0;

	    for(i=0;i<=cantidad;i++){

            printf("%s",aNombres[i]);

	   }
	}
    return retorno;
}

int ordenarArrayString(char aNombres[][QTY_CARACTERES]){

	int i;
	int j;
	char aux[QTY_CARACTERES];
	int retorno = -1;

	if(aNombres != NULL ){
		retorno =0;

		for (i=0;i<QTY_NOMBRES-1;i++){

			for(j=i+1;j<QTY_NOMBRES;j++){

				if(strcmp(aNombres[i],aNombres[j])>1){
					strcpy(aux,aNombres[i]);
					strcpy(aNombres[i],aNombres[j]);
					strcpy(aNombres[j], aux);
				}

			}

		}

		printf("%s",aNombres[i]);
	}
     return retorno;
}


