//ALGORITMOS

#include "head.h"

int * ordenacionBurbuja(int * vector, int num){
	int i, j, temp;
	int * vector_ordenado;
	
	if((vector_ordenado = (int *) malloc(num * sizeof(int))) == NULL){
		printf("Error al reservar memoria.\n");
		return NULL;
	}
	
	for(i=0; i<num; i++){
		vector_ordenado[i] = vector[i];
	}
	
	for(i=0; i < num; i++){
		for(j=0; j < num-1 ; j++){
			if(vector_ordenado[j+1] < vector_ordenado[j]){
				temp = vector_ordenado[j+1];
				vector_ordenado[j+1] = vector_ordenado[j];
				vector_ordenado[j] = temp;
			}
			//ciclos++;
		}
	}
	
	return vector_ordenado;	
}

