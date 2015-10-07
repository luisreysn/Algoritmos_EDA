//FUNCIONES

#include "head.h"


/*===========================================
				MENUS Y TEXTOS				
=============================================*/

void menu(){
	printf("\n\t\t\tESTRUCTURA DE DATOS Y ALGORITMOS\n\n");
	printf(" ==============================================================================\n");
	printf(" |\n");
	printf(" |\n");
	printf(" |\t1. Burbuja.\n");
	printf(" |\t2. Multiplicacion.\n");
	printf(" |\t9. Opciones.\n");
	printf(" |\t0. Salir.\n");
	printf(" |\n");
	printf(" |\n");
	printf(" |\n");
	printf(" |\n");
	printf(" |\n");
	printf(" |\n");
	printf(" |\n");
	printf(" |\n");
	printf(" |\n");
	printf(" |\n");
	printf(" ==============================================================================\n");
	printf("  >> ");
	
}

void menu_burbuja(){
	printf("Como desea utilizar la ordenación por burbuja?\n\n");
	printf("\t1. Introducir Vector.\n");
	printf("\t2. Vector Aleatorio.\n");
	printf("\t3. Leer vector de fichero.\n\n");
	printf("  >>");
}

/*===========================================
					BURBUJAS				
=============================================*/
int burbuja_vector(){
	int n;
	int *vector;
	int *vector_ordenado;
	
	printf("Indica el tamanno del vector: ");
	scanf("%d", &n);
	
	if((vector = (int *) malloc(n * sizeof(int))) == NULL){
		printf("Error al reservar la memoria.");
		return 1;
	}
	
	printf("Introduzca los numeros:\n");
	if(introducirVector(vector, n) != 0){
		printf("Error al introducir los numeros.\n");
	}
	system("cls");
	
	printf("\nEl vector introducido es el siguiente:\n");
	if(mostrarVector(vector, n) == 2){
		printf("Error, vector vacio.\n");
		return 2;
	}
	printf("\n");
	
	vector_ordenado = ordenacionBurbuja(vector, n); 
	
	printf("\nEl vector ya ordenado queda tal que asi:\n");
	if(mostrarVector(vector_ordenado, n) == 2){
		printf("Error, vector vacio.\n");
		return 2;
	}
	
	system("pause");
	system("cls");
	return 0;
}



int burbuja_aleatoria(){
	int n;
	int *vector;
	int *vector_ordenado;
	
	printf("Indica el tamanno del vector: ");
	scanf("%d", &n);
	
	vector = generar_vector(n);
	
	printf("\nEl vector generado es el siguiente:\n");
	if(mostrarVector(vector, n) == 2){
		printf("Error, vector aleatorio vacio.\n\n");
		return 2;
	}
	printf("\n\n");
	
	vector_ordenado = ordenacionBurbuja(vector, n); 
	
	printf("\nEl vector ya ordenado queda tal que asi:\n");
	if(mostrarVector(vector_ordenado, n) == 2){
		printf("Error, vector ordenado vacio.\n\n");
		return 2;
	}
	
	printf("\n\n");
	system("pause");
	system("cls");
	return 0;
}

int burbuja_fichero(){
	int n;
	int *vector;
	int *vector_ordenado;
	char nombre[100];

	printf("Indica el nombre del fichero (con .txt): ");
	scanf("%s", &nombre);
	
	//vector = cargar_fichero();
	
	printf("\nEl vector leido es el siguiente:\n");
	if(mostrarVector(vector, n) == 2){
		printf("Error, vector aleatorio vacio.\n\n");
		return 2;
	}
	printf("\n\n");
	
	vector_ordenado = ordenacionBurbuja(vector, n); 
	
	printf("\nEl vector ya ordenado queda tal que asi:\n");
	if(mostrarVector(vector_ordenado, n) == 2){
		printf("Error, vector ordenado vacio.\n\n");
		return 2;
	}
	
	printf("\n\n");
	system("pause");
	system("cls");
	return 0;
}
