/*
 * biblioteca.h
 *
 *  Created on: 19 sep. 2019
 *      Author: alumno
 */


#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#define EXIT_ERROR -1

int getInt(	int *pResultado,
			char *pMensaje,
			char *pMensajeError,
			int minimo,
			int maximo,
			int reintentos);

int getFloat(float *pResultado,
			 char *pMensaje,
			 char *pMensajeError,
			 float minimo,
			 float maximo,
			 int reintentos);

int getChar( char *pResultado,
			 char *pMensaje,
			 char *pMensajeError,
			 char minimo,
			 char maximo,
			 int reintentos);

int getString (char *pResultado,
		      char *pMensaje,
			  char *pMensajeError,
			  int minimo,
			  int maximo,
			  int reintentos);

void burbuja(int array[], int limite);

void insercion(int array[], int limite);



#endif /* BIBLIOTECA_H_ */
