/*
 * pantalla.h
 *
 *  Created on: 8 oct. 2019
 *      Author: alumno
 */

#ifndef PANTALLA_H_
#define PANTALLA_H_

typedef struct
{
	int id;
	int status;
	int tipo;
	char nombre[50];
	float precio;
	char direccion[50];
}ePantalla;

int aPantalla_mayorPrecioFacturado(ePantalla[] listaPantalla, int tamanioPantalla, ePublicidad[] listaPublicidad, int tamanioPublicidad);




#endif /* PANTALLA_H_ */
