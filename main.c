#include <stdio.h>
#include <stdlib.h>
typedef struct Empleados{
	char Nombre[10];
	char Apellido[10];
	char Cargo[10];
	char SueldoBasico[10];
	int Horasextras50;
	int Horasextras100;
	
} Empleados;
int main(int argc, char *argv[]) {
	struct Empleados e[10]; 
	int i = 0;
	for(i = 0; i< 10;i++){
		printf("Ingrese los datos de los Empleados %d\n",(i+1));
		printf("Nombre: \t");
		scanf("%s",&e[i].Nombre); 
		printf("Apellido: \t");
		scanf("%s",&e[i].Apellido);
		printf("Cargo: \t");
		scanf("%s",&e[i].Cargo); 	
		printf("SueldoBasico: \t");
		scanf("%s",&e[i].SueldoBasico); 
		printf("Horasextras50: \t");
		scanf("%s",&e[i].Horasextras50);
	    printf("Horasextras100: \t");
		scanf("%s",&e[i].Horasextras100);
		 
}
	return 0;
}
