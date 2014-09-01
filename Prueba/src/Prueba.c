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
#include "ejercicios.h"




int main(void){
	char* hola = "Hola";
	char* op ="operativos";

//Ejercicio 1.1
	char* devol;
	devol = string_concat(hola, op);
	printf ("%s ", devol);
	free (devol);
//Ejercicio 1.2

	char* con= malloc (sizeof (hola) + sizeof (op));
	string_concat_dinamyc(hola, op, &con);
	free (con);

	//Ejercicio 1.3
/*	char** user;
	user = malloc (20);
	char* dominio = malloc (20);
	char* mail= malloc(20);
	mail = "ayelenmacarenagarcia@gmail.com";
	mail_split (mail, &user, &dominio);
	printf ("%d \n", user);
	printf ("%d \n",dominio);
	free (user,dominio,mail);
*/
	return 0;
}

