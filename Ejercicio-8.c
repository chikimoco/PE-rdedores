/*
Autor:Andrés Perez Romero 17/Febrero/17
Entradas:x, n
Salidas:Resultado de la funcion
Procedimiento general:El algoritmo sigue una formula dada para una funcion.
*/
#include <stdio.h>

 float calculoFuncion(float x, int n);
 float potencia(float x, int n);
 
 int main(void)
 {
 	/*Entradas:*/
	float x;
 	int n;
 	scanf("%f%d",&x,&n);
	/*Salida/Procedimiento:
	La funcion realiza el calculo y se imprime*/
 	printf("%f",calculoFuncion(x,n));
 	return 0;
 }

 float calculoFuncion(float x,int n)
{
	/*Esta es la funcion que sigue la formula dada de acuerdo al valor de n*/
	float resultado;
	if (n>=0)
	{
		resultado=x+(potencia(x,n)/n)-(potencia(x,n+2)/(n+2));
	}
	else
	{
		resultado=(potencia(x,n)/n)-(potencia(x,n+2)/(n+2));
	}
	return resultado;
}

 float potencia(float x,int n)
{
	/*Funcion para calcular potencias*/
	int i;
	float potencia=1;
	for(i=1;i<=n;i++)
	{
		potencia=potencia*x;
	}
	return potencia;
	
}
