/*
 * main.c
 *
 *  Created on: 6 de abr. de 2016
 *      Author: Jorge
 */

#include <stdio.h>


int main(void){
	char dec1;
	char *usuario;
	usuario = (char*)malloc(21*sizeof(char));
	char *contrasenya;
	char *contrasenya2;
	char *nombre;
	char *apellido;

	printf("Hola, bienvenido a N&C \n"
			"Por favor, elija una opcion:\n"
			"1. Log in\n"
			"2. Crear usuario\n");
	fflush(stdout);
	dec1 = getchar();
	switch(dec1){
	case '1':
		printf("Introduzca usuario y contrasena:\n"
				"Usuario:\n");
		fflush(stdout);
		fgets(usuario, 21, stdin);
		printf("%c", usuario[0]);

		printf("Contrasena:\n");
		fflush(stdout);

		//Coger contraseña


		break;
	case '2':
		printf("CREACION DE NUEVO USUARIO\n--------------------------\nIntroduzca su nombre:\n");
		fflush(stdout);

		printf("Primer apellido:\n");
		fflush(stdout);

		printf("Introduzca nombre de usuario:\n");
		fflush(stdout);

		printf("Introduzca contrasena:\n");
		fflush(stdout);

		printf("Repita la contrasena:\n");
		fflush(stdout);

		break;
	}

	return 0;
}
