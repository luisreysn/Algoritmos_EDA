//FUNCIONES INTERNAS

#include "head.h"

int introducirVector(int *vector, int n){
	int x;
	
	for(x = 0; x < n; x++){
		printf("Cifra %d: ", x+1);
		scanf("%d", &vector[x]);
	}
	return 0;
}

int mostrarVector(int * vector, int n){
	int x;
	
	if(vector == NULL){
		printf("El vector esta vacio.\n");
		return 2;
	}else{
		for(x=0; x<n; x++){
			printf("%d ", vector[x]);
		}
	}
	return 0;
}

/*void intercambiar(int * x, int * y){
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
	
}*/

int * generar_vector(int n){
	int * vector;
	int x;
	
	if((vector = (int*) malloc(n * sizeof(int))) == NULL){
		printf("Error al reservar la memoria.\n");
		return NULL;
	}
	
	for(x=0; x<n; x++){
		vector[x] = (1 + rand() % 100);
	}

	return vector;	
}



/*int * cargar_ficheros(){

	return NULL;
}*/

