/*
 ============================================================================
 Name        : clase9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"
#include "pantalla.h"

#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1

int main(void) {



	return EXIT_SUCCESS;
}

Pantalla g;
g.id=5;
pedirDatosPantalla(&g);

int pedirDatosPantalla(Pantalla* pPantalla)
{
	Pantalla p;
	getInt(&p.idPantalla,"Ingrese id");
	getString(p.nombre,"ingrese nombre");
	getString(p.direccion,"ingrese direccion");

	pPantalla = p;
}
