/*
 * Controller.h
 *
 *  Created on: 16 dic. 2019
 *      Author: lorena
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "eComputer.h"


int controller_loadFromText(LinkedList* pArrayListEmployee);
int controller_saveAsText(LinkedList* pArrayListEmployee);
int controller_ListComputer(LinkedList* pArrayListEmployee);
int controller_sortEmployee(LinkedList* pArrayListEmployee);
int vaciarLLComputer(LinkedList* pArrayListEmployee);
int employee_GetPorId(LinkedList* pArrayListEmployee, EComputer *empleado, int id);
int filtroMenoresDe45(void* p);
int controller_menosDe45(LinkedList* pArrayListCachorros);
int controller_callejero(LinkedList* pArrayListCachorros);
int filtroCallejero(void* p);
int controller_guardar(LinkedList* pArrayListCachorros);
int filtroMachos(void* p);

int mapear(void* item);



#endif /* CONTROLLER_H_ */
