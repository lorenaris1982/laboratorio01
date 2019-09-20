/*
 * pantalla.h
 *
 *  Created on: 19 sep. 2019
 *      Author: alumno
 */

#ifndef EMPLEADO_H_
#define EMPLEADO_H_

#define QTY_EMPLEADOS 10
#define QTY_NOMBRES 10
#define QTY_CARACTERES 50

struct sPantalla
{
	int idPantalla;
	int status;
	//***************
	char tipo[50];
	char nombre[50];
	char via[50];

};

int initLugarLibreEmpleado(struct sPantalla *aArray, int cantidad);

int imprimirArrayEmpleados(struct sPantalla *aEmpleado, int cantidad);
int ordenarArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad);

int buscarLugarLibreEmpleado(struct sEmpleado *aArray, int cantidad);
int buscarEmpleadoPorId(struct sEmpleado *aArray, int cantidad,int id);
int bajaEmpleadoPorId(struct sEmpleado *aArray, int cantidad,int id);
int modificarEmpleadoPorId(struct sEmpleado *aArray, int cantidad,struct sEmpleado empleado);
int altaEmpleadoPorId(struct sEmpleado *aArray, int cantidad,struct sEmpleado empleado);
int buscarPantallaPorId(struct sPantalla *aArray, int cantidad,int id);
int buscarLugarLibreId(struct sPantalla *aArray, int cantidad);
int generarId(void);
int modificarPantallaPorId(struct sPantalla *aArray, int cantidad,struct sPantalla pantalla);

#endif /* EMPLEADO_H_ */
