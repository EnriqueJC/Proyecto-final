//DESAROLLO DE UN ROL DE PAGOS 
#include <stdio.h>
#include <stdlib.h>
typedef struct Empresa{
	char Nombre[20];
	char RUC[15];
	char Direccion[30];
}Empresa;
int main(){
	struct Empresa i;
	int d;
	printf("Datos Empresa\n");
	printf("NOMBRE:\t");
	scanf(" %s",&i.Nombre);
	printf("RUC:\t");
	scanf(" %s",&i.RUC);
	printf("DIRECION:\t");
	scanf(" %s",&i.Direccion);
return 0;
}
