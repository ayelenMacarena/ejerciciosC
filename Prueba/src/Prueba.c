/*
 ============================================================================
 Name        : Prueba.c
 Author      : Ayelén
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <commons/string.h>
#include "ejercicios.h"




int main(void){

	//Ejercicio 1
	char* hola = "Hola";
	char* op ="operativos";
	char* devol;
	devol = string_concat(hola, op);
	printf ("%s", devol);
	free (devol);
	char** con = "null";
	string_concat_dinamyc(hola, op, con);
	return 0;
}

