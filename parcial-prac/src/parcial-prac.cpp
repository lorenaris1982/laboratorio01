//============================================================================
// Name        : parcial-prac.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "Empleado.h"

#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1
#define QTY_EMPLEADOS 10

int main() {

	struct sEmpleado aEmpleados[QTY_EMPLEADOS];
	initLugarLibreEmpleado(aEmpleados,QTY_EMPLEADOS);

	struct sEMpleado unEmpleado = {5, STATUS_EMPTY, "maria","gomez"};
	altaEmpleadoPorId(aEmpleados,QTY_EMPLEADOS);
	imprimirArrayEmpleados(aEmpleados,QTY_EMPLEADOS);
	buscarLugarLibreEmpleado(aEmpleados,QTY_EMPLEADOS);

	altaForzadaEmpleados(aEmpleados,QTY_EMPLEADOS);

    if(altaEmpleadoPorId(aEmpleados,QTY_EMPLEAQDOS,unEmpleado)==0){
    	printf("Esta todo ok\n");

    }else{
    	printf("no hay lugar\n");
    }

	return 0;
}
