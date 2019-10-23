/*
 * pedido.h
 *
 *  Created on: 22 oct. 2019
 *      Author: alumno
 */

#ifndef PEDIDO_H_
#define PEDIDO_H_

typedef struct
{
	int kilos;
	int plastico2;
	int plastico4;
	int plastico5;
	char estado [51];
	int idCliente;

}Pedido;

Pedido* new_cliente(Pedido* this);
Pedido delete_cliente(Pedido* this);



#endif /* PEDIDO_H_ */
