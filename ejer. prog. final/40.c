#include <stdio.h>
/*40
Autor: 29/Enero/17
Entradas: trabajadores (int) sueldos(float)
Salidas: Nsueldo (float)
Procedimiento general:
se ingresa la cantidad de trabajadores
en el ciclo for se van ingresando los sueldos
donde en un if se validan si son menor a 800
para saber si se le asigna el incentivo
*/
int main(int argc, char *argv[]) {
	/*entradas:
	trabajadores(int) sueldo(float) variable de entrada
	cont contador, 
	Nsueldo salida
	*/
	int trabajadores = 0, cont = 0;
	float sueldo = 0.0, Nsueldo = 0.0;
	
	printf("Cuantos trabajadores hay ");
	scanf("%d", &trabajadores);
	/*ciclo for para ingresar los sueldos
	de los trabajadores ingresados*/
	for (cont = 1; cont <= trabajadores; cont++)
	{
		printf("Dar el valor del sueldo del trabajador \n ");
		scanf("%f",&sueldo);
		/* if donde se validan los sueldos*/
		if (sueldo<800.00){
			Nsueldo = sueldo*1.15;
/*salida*/
			printf("su nuevo sueldo sera de %f\n ",Nsueldo);
		} 
		else {printf("no sufrira cambio en su sueldo \n");}
	}
	return 0;
}


