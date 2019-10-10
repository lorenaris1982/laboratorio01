/*
 * fantasma.h
 *
 *  Created on: 9 oct. 2019
 *      Author: lorena
 */

#ifndef FANTASMA_H_
#define FANTASMA_H_



typedef struct
{
    int idUnico;
    int status;
    //-----------------
    char nombre [50];
    char apellido [50];
    char direccion;
    float precio;
    int tipo;

}sFantasma;

static int generarId(void);
int fantasma_initLugarLibre(sFantasma *aArray, int cantidad);
int fantasma_buscarLugarLibre(sFantasma *aArray, int cantidad);
int fantasma_buscarPorId(sFantasma *aArray, int cantidad,int id);
int fantasma_altaPorId(sFantasma *aArray, int cantidad,sFantasma item);
int fantasma_bajaPorId(sFantasma *aArray, int cantidad,int id);
int fantasma_modificarPorId(sFantasma *aArray, int cantidad,sFantasma item);
int fantasma_listar(sFantasma *aArray, int cantidad);
int fantasma_ordenarPorString(sFantasma array[],int cantidad);



#endif /* FANTASMA_H_ */
