/*
	@author:  Luis Rey Sánchez
	email: 	  theluisitorey@usal.es
	web page: www.luisreys.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Return 0: todo correcto.
	Return 1: error al reservar memoria.
	Return 2: vector vacío;
*/


//Funciones Principales y textos
void funcionPrincipal();
void menu();
void menu_burbuja();

//Tipos de algoritmos
void burbuja();

//Subcategoría de algoritmos
int burbuja_vector();
int burbuja_aleatoria();
int burbuja_fichero();

//Funciones más generales
int introducirVector(int*, int);
int mostrarVector(int*, int);
void intercambiar(int *, int *);
int * generar_vector(int);
int * cargar_ficheros();

//Algoritmos PUROS
int* ordenacionBurbuja(int *, int);
