/*
	@author: Luis Rey S�nchez, theluisitorey@usal.es - www.luisreys.com

	@fecha: 07/10/2015
	@versi�n: 0.0.1

	@descripci�n: Funciona. Primera parte del proyecto lista, las funciones y men�s principales est�n.
		Ordenaci�n por burbuja est�. 
		Ordernar introduciendo vector est�.

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
