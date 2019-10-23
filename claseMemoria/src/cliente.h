/*
 * cliente.h
 *
 *  Created on: 22 oct. 2019
 *      Author: alumno
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

typedef struct
{
	int idUnico;
	int status;
	//---------
	char nombre[51];
	char direccion [51];
	char cuit [51];
	char localidad[51];

} Cliente;

Cliente* new_cliente();
void delete_cliente(Cliente* this);
int cli_setNombre(Cliente* this, char* nombre);
int cli_setDireccion(Cliente* this, char* direccion);
int cli_setCuit(Cliente* this, char* cuit);
int cli_setLocalidad(Cliente* this, char* localidad);

Cliente* new_clientePorParametro(char* nombre,char* direccion,char* cuit,char* localidad);



#endif /* CLIENTE_H_ */
