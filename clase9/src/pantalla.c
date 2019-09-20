/*
 * pantalla.c
 *
 *  Created on: 19 sep. 2019
 *      Author: alumno
 */

#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1


int initLugarLibrePantalla(struct sPantalla *aArray, int cantidad){
	int i;
	int retorno = -1;
	if(aArray != NULL && cantidad > 0){
		for(i=0;i<cantidad;i++){
			aArray[i].status = STATUS_EMPTY;
		}
		retorno = 0;
	}
	return retorno;
}

int buscarPantallaPorId(struct sPantalla *aArray, int cantidad,int id){
	int retorno = -1;
	int i;
	for(i=0;i<cantidad;i++)
	{
		if(aArray[i].status== STATUS_NOT_EMPTY )
		{
			if(aArray[i].idPantalla == id){
				retorno = id;
				break;
			}
		}
	}
	return retorno;
}

int buscarLugarLibreId(struct sPantalla *aArray, int cantidad){
	int retorno = -1;
	int i;
	if(aArray != NULL && cantidad > 0){
		for(i=0;i<cantidad;i++){
			if(aArray[i].idPantalla == STATUS_EMPTY){
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}

int altaPantallaPorId(struct sPantalla *aArray, int cantidad,struct sPantalla pantalla){
	int retorno = -1;
	int index;
	if(aArray!=NULL && cantidad>0){
		index = buscarLugarLibreId(aArray, cantidad);
		if(index>=0){
			aArray[index] = pantalla;
			aArray[index].idPantalla = generarId();
			retorno = 0;
		}
	}
	return retorno;

	}


int generarId(void)
{
	static int laquequiera=0;
	laquequiera++;
	return laquequiera;

}

int modificarPantallaPorId(struct sPantalla *aArray, int cantidad,struct sPantalla pantalla){
	int retorno = -1;
	int index;
	if(aArray!=NULL && cantidad>0){
		index = buscarPantallaPorId(aArray, cantidad, pantalla.idPantalla);
		if(index!=NULL){
			aArray[index] = pantalla;
			aArray[index].status = STATUS_NOT_EMPTY;
			retorno = 0;
		}
	}
	return retorno;
}

int bajaPantallaPorId(struct sPantalla *aArray, int cantidad,int id){
	int retorno = -1;
	int index;
	if(aArray!=NULL && cantidad > 0){
		index = buscarPantallaPorId(aArray, cantidad, id);
		if(index != -1){
			aArray[index].status = STATUS_EMPTY;
			retorno = 0;
		}
	}
	return retorno;
}


