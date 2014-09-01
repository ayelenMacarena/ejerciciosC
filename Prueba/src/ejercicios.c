/*
 * ejercicios.c
 *
 *  Created on: 30/08/2014
 *      Author: utnso
 */

#include "ejercicios.h"
#include <string.h>

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
	*strines = printf ("Ejercicio 1.1: %s %s \n", s1 , s2);
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
		*s3 = printf ("Ejercicio 1.2: %s %s\n", s1, s2);
		return;
}

//Ejercicio 1.3
/*
*   Separa el mail en un usuario y un dominio.
*   Ejemplo:
*   char* mail = "ritchie@ansic.com.ar";
*   char* user, dominio;
*   mail_split(mail, &user, &dominio);
*   =>
*   user = "ritchie"
*   dominio = "ansic.com.ar"
*/
/*void mail_split(const char* mail, char** user, char** dominio){
	int n = 0;
	while (mail[n]!="@") {
	n++;
	};
    strncpy (&mail, &user, n);
	int m = (sizeof (mail) - n );
	strncpy (&mail, &dominio, n);
	return;
}
*/
