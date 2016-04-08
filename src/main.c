/*
 * main.c
 *
 *  Created on: 6 de abr. de 2016
 *      Author: Jorge
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	char * dec1;
	dec1 = (char*)malloc(10*sizeof(char));
	char *usuario;
	usuario = (char*)malloc(21*sizeof(char));
	char *contrasenya;
	char *contrasenya2;
	char *nombre;
	char *apellido;

	printf("Hola, bienvenido a N&C \n"
			"Por favor, elija una opción:\n"
			"1. Log in\n"
			"2. Crear usuario\n");
	fflush(stdout);
	fgets(dec1, 10, stdin);
	if(dec1[0] == '1'){
		printf("Introduzca usuario y contraseña:\n"
				"Usuario:\n");
		fflush(stdout);
		fgets(usuario, 21, stdin);
		printf("%c", usuario[0]);
		printf("%c", usuario[1]);

		printf("Contraseña:\n");
		fflush(stdout);

		//Coger contraseña


	}else if(dec1[0] == '2'){
		do{
		printf("CREACIÓN DE NUEVO USUARIO\n--------------------------\nIntroduzca su nombre:\n");
		fflush(stdout);
		//TODO Coger nombre
		printf("Primer apellido:\n");
		fflush(stdout);
		//TODO Coger apellido
		printf("Introduzca nombre de usuario:\n");
		fflush(stdout);
		//TODO Coger nick
		printf("Introduzca contraseña:\n");
		fflush(stdout);
		//TODO Coger contraseña
		printf("Repita la contraseña:\n");
		//TODO Coger contraseña
		}while(contrasenya != contrasenya2);
		int contMusica = 2;
		printf("GUSTOS\n----------\nMusica (puedes elegir hasta dos de los siguientes):\n  1. Pop\n"
				"2. Rock\n3. Rap\n4. EDM\n5. Heavy\n6. Reggae\n7. Reggaeton\n8.Clasica");
		//TODO DecMusica declarar y recoger
		char decMuscia;
		while(contMusica > 0){
			if(decMusica == '1'){

			}else if(decMusica == '2'){

			}else if(decMusica == '3'){

			}else if(decMusica == '4'){

			}else if(decMusica == '5'){

			}else if(decMusica == '6'){

			}else if(decMusica == '7'){

			}else if(decMusica == '8'){

			}
			contMusica--;
		}

	}

	return 0;
}
