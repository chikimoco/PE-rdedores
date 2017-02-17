/*
Autor:Andrés Perez Romero 17/Febrero/17
Entradas:base x, n
Salidas:Expansion de (x+1)**n
Procedimiento general:El algoritmo multiplica la base elevada a una
potencia por las combinaciones de n,i. Imprime cada termino uno por uno
Luego acumula los terminos en la sumatoria. Imprime la sumatoria.
*/
#include <stdio.h>

int combinaciones(int n,int r);
int factorial(int n);
int potencia(int x,int n);

int main(int argc, char *argv[]) {
	/*Entradas:*/
	int x,n,contador,termino,sumatoria=0;
	scanf("%d%d",&x,&n);
	/*Procedimiento:*/
	printf("(x+1)**%d = ",n);
	/*En este ciclo se calcula y acumula cada termino de la sumatoria*/
	for(contador=n;contador>=0;contador--)
	{
		termino=combinaciones(n,contador)*(potencia(x,contador));
		printf("%d",termino);
		if (contador>0)
		{
			printf(" + ");
		}
		sumatoria=sumatoria+termino;
	}
	/*Salidas:*/
	printf(" = %d",sumatoria);
	return 0;
}

int combinaciones(int n,int r)
{
	/*Funcion para calcular combinaciones*/
	int combinaciones;
	combinaciones=factorial(n)/(factorial(r)*factorial(n-r));
	return combinaciones;
}

int factorial(int n)
{
	/*Funcion para calcular factoriales*/
	int factorial=1,contador;
	for(contador=1;contador<=n;contador++)
	{
		factorial=factorial*contador;
	}
	return factorial;
	
}

int potencia(int x,int n)
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
