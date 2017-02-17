/*
Autor:Andrés Perez Romero 17/Febrero/17
Entradas:base x, diferencia
Salidas:Aproximacion a la tangente de x
Procedimiento general:El algoritmo calcula el seno y el coseno, luego
divide seno entre coseno. El resultado es la tangente
*/
#include <stdio.h>

float factorial(float n);
float potencia(float x,float n);
float seno(float x,float dif);
float coseno(float x,float dif);

int main(int argc, char *argv[]) {
	/*Entradas:*/
	float x,dif,tangente;
	scanf("%f%f",&x,&dif);
	/*Procedimiento:
	Aqui se llaman las funciones seno y coseno para calcular ambos y luego
	realizar su division*/
	tangente=seno(x,dif)/coseno(x,dif);
	/*Salidas:*/
	printf("%f",tangente);
	return 0;
}

float seno(float x,float dif)
{
	/*Funcion para calcular aproximacion al seno*/
	float contador,actual=0,anterior;
	anterior=-1*dif-1;
	for(contador=0;(actual-anterior)>dif;contador++)
	{
		anterior=actual;
		actual=actual+potencia(-1,contador)*(potencia(x,(2*contador)+1)/factorial((2*contador)+1));
	}
	return actual;
}

float coseno(float x,float dif)
{
	/*Funcion para calcular aproximacion al coseno*/
	float contador,actual=0,anterior;
	anterior=-1*dif-1;
	for(contador=0;actual-anterior>dif;contador++)
	{
		anterior=actual;
		actual=actual+potencia(-1,contador)*(potencia(x,contador)/factorial(2*contador));
	}
	return actual;
}

float factorial(float n)
{
	/*Funcion para calcular factoriales*/
	float factorial=1,contador;
	for(contador=1;contador<=n;contador++)
	{
		factorial=factorial*contador;
	}
	return factorial;
}

float potencia(float x,float n)
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
