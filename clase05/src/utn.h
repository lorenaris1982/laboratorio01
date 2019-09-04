
#define EXIT_ERROR -1

int getInt(	int *resultado,
			char *mensaje,
			char *mensajeError,
			int minimo,
			int maximo,
			int reintentos);

int getFloat(float *resultado,
			 char *mensaje,
			 char *mensajeError,
			 float minimo,
			 float maximo,
			 int reintentos);

int getChar( char *resultado,
			 char *mensaje,
			 char *mensajeError,
			 char minimo,
			 char maximo,
			 int reintentos);

int getString (char *resultado,
		      char *mensaje,
			  char *mensajeError,
			  int minimo,
			  int maximo,
			  int reintentos);

int imprimeArrayInt(int array[],int limite);

int initArrayInt(int array[],int limite,int valor);

int getArrayInt( int array[],
		         int limite,
			     char *mensaje,
			     char *mensajeError,
			     int minimo,
			     int maximo,
			     int reintentos);

int maximoArrayInt(int array[],
		           int limite,
				   int cantidadElementos,
				   int *pResultado);

int minimoArrayInt(int array[],
		           int limite,
				   int cantidadElementos,
				   int *pResultado);

int promedioArrayInt(int array[],
		             int limite,
					 int cantidadElementos,
					 float *pResultado);


