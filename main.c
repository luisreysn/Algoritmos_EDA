/*
	@author: Luis Rey Sánchez, theluisitorey@usal.es - www.luisreys.com

	@fecha: 07/10/2015
	@versión: 0.0.1

	@descripción: Funciona. Primera parte del proyecto lista, las funciones y menús principales están.
		Ordenación por burbuja está. 
		Ordernar introduciendo vector está.

*/

#include "head.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) {
	funcionPrincipal();

	return 0;
}

void funcionPrincipal(){
	int select, bandera;
	bandera = 1;
	
	do{
	menu();
	scanf("%d", &select);
	fflush(stdin);
	
	switch(select){
		case 1:
			system("cls");
			burbuja();
			break;
		case 9:
			break;
		case 0:
			bandera = 0;
			break;
	}
	}while(bandera == 1);
}

void burbuja(){	
	int opcion;
	
	menu_burbuja();
	scanf("%d", &opcion);
	fflush(stdin);
	
	switch(opcion){
		case 1:
			system("cls");
			burbuja_vector();  //funciones.cpp
			break;
		case 2:
			system("cls");
			burbuja_aleatoria();
			break;
		case 3:
			break;
		
		
	}
	
}
