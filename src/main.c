/*
 * main.c
 *
 *  Created on: 6 de abr. de 2016
 *      Author: Jorge
 */

#include <stdio.h>

int main(void){
	int dec1;
	printf("Hola, bienvenido a N&C \n"
			"Por favor, elija una opción:\n"
			"1. Log in\n"
			"2. Crear usuario");
	fflush(stdout);
	dec1 = getchar();
	printf("%i", dec1);
	return 0;
}
