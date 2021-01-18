#include <stdio.h>
#include <stdlib.h>
typedef struct Empresa{
	char Nombre[20];
	char month[15];
	char year[4];
	int Nempleados;
}Empresa;
typedef struct Empleado{
	char Apellido[10];
	char Nombre[10];
	char Cargo[10];
	int dias;
	float Sueldo;
	float HeE;
	float HeO;
	float ant;
	float pres;
}Empleado;
typedef struct rol{
	float sueldo;
	float hee;
	float heo;
	float fr;
	float d3;
	float d4;
	float ing;
	float ai;
	float egr;
	float sum;
}rol;
int main(int argc, char *argv[]) {
	Empresa m;
	int i=0;
	float ing=0,egr=0,suma=0;
	printf("DATOS EMPRESA\n");
	printf("Nombre:\t");
	scanf("%s",&m.Nombre);
	printf("Month:\t");
	scanf("%s",&m.month);
	printf("Year:\t");
	scanf("%s",&m.year);
	printf("Numero de empleados:\t");
	scanf("%d",&m.Nempleados);
	Empleado e[m.Nempleados];
	printf("\nDATOS EMPLEADOS\n");
	for(i=0;i<m.Nempleados;i++){
		printf("Empleado Numero %d\n",i+1);
		printf("Apellido:\t");
		scanf("%s",&e[i].Apellido);
		printf("Nombre:\t");
		scanf("%s",&e[i].Nombre);
		printf("Cargo:\t");
		scanf("%s",&e[i].Cargo);
		printf("Dias trabajados:\t");
		scanf("%d",&e[i].dias);
		printf("Sueldo:\t");
		scanf("%f",&e[i].Sueldo);
		printf("H.E. Ordinarias:\t");
		scanf("%f",&e[i].HeO);
		printf("H.E. Extraordinarias:\t");
		scanf("%f",&e[i].HeE);
		printf("Anticipos:\t");
		scanf("%f",&e[i].ant);
		printf("Prestamos:\t");
		scanf("%f",&e[i].pres);
	}
	rol r[m.Nempleados];
	for(i=0;i<m.Nempleados;i++){
		r[i].sueldo=(e[i].Sueldo/30)*e[i].dias;
		r[i].hee=(e[i].Sueldo/240)*(2*e[i].HeE);
		r[i].heo=(e[i].Sueldo/240)*(1.5*e[i].HeO);
		r[i].fr=e[i].Sueldo*(8.33/100);
		r[i].d3=(r[i].sueldo+r[i].hee+r[i].heo)/12;
		r[i].d4=e[i].dias*1.11;
		r[i].ing=r[i].sueldo+r[i].hee+r[i].heo+r[i].fr+r[i].d3+r[i].d4;
		r[i].ai=(r[i].sueldo+r[i].hee+r[i].heo)*(9.45/100);
		r[i].egr=(r[i].ai+e[i].pres+e[i].ant);
		r[i].sum=r[i].ing-r[i].egr;
	}
	printf("\n\n\n\t\t\t\t\t   %s",m.Nombre);
	printf("\n\t\t\t\t\t\tROL DE PAGOS");
	printf("\n\t\t\t\t\t   %s %s",m.month,m.year);
	printf("\n N  NOMINA\t CARGO\tSUELDO\tH.E\tF.R.\t13ro\t14to\tT.INGR\tIESS\tANT\tPRES\tT.EGRE\tT.PAGAR\n");
	for(i=0;i<m.Nempleados;i++){
	printf(" ________________________________________________________________________________________________________________\n");
	printf("|%d ",i+1);
	printf("%s ",e[i].Apellido);
	printf("%s\t",e[i].Nombre);
	printf("%s\t",e[i].Cargo);
	printf("%.2f\t",r[i].sueldo);
	printf("%.2f\t",r[i].hee+r[i].heo);
	printf("%.2f\t",r[i].fr);
	printf("%.2f\t",r[i].d3);
	printf("%.2f\t",r[i].d4);
	printf("%.2f\t",r[i].ing);
	printf("%.2f\t",r[i].ai);
	printf("%.2f\t",e[i].ant);
	printf("%.2f\t",e[i].pres);
	printf("%.2f\t",r[i].egr);
	printf("%.2f |\n",r[i].sum);
	}
	printf(" ________________________________________________________________________________________________________________\n");
	return 0;
}
