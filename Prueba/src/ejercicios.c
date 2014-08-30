/*
 * ejercicios.c
 *
 *  Created on: 30/08/2014
 *      Author: utnso
 */

#include "ejercicios.h"


//Ejercicio 1.1

/*
	*   Retorna un String nuevo que es la concatenación
	*   de los dos Strings pasados por parámetro
	*   Ejemplo:
	*   char* nombre = "Ritchie";
	*   char* saludo = string_concat("Hola ", nombre);
	*   =>
	*   saludo = "Hola Ritchie"
	*/

char* string_concat(const char* s1,const char* s2){
	char* strines = malloc (sizeof (s1)+ sizeof (s2));
	*strines = printf ("%s %s", s1 , s2);
	return strines;
}
//Ejercicio 1.2

	//Ejercicio 1.2
	/*
	*   Asigna en el tercer parámetro, la concatenación
	*   de los primeros dos Strings
	*   Ejemplo:
	*   char* nombre = "Ritchie";
	*   char* saludo;
	*   string_concat("Hola ", nombre, &saludo);
	*   =>
	*   saludo = "Hola Ritchie"
	*/

void string_concat_dinamyc(const char* s1, const char* s2, char** s3){
		*s3 = printf ("%s %s", s1, s2);
		return;
}


