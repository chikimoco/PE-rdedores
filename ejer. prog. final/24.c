#include <stdio.h>
/* 24
Autor: 29/Enero/17
Entradas: n (int)
Salidas: sumador (float)
Procedimiento general:
ciclo for donde se calcula y acomula la potencia
y un sumador donde se acomula la suma
de la operación ..+n/2^n
*/
int main(int argc, char *argv[]) {
	/* entrada: n (int) vaariable de entrada
	contador, potencia acomulador
	sumador (float) acomulador de suma y salida
	*/
	int n, contador=1;
	float potencia=1, sumador=0;
	scanf ("%d",&n);
	/* ciclo for para calcular potencia, hacer
	la operación y acomularla 
	*/
	for (contador; contador <= n; contador++)
	{
		potencia=potencia*2;
		sumador = sumador + contador/potencia;
	}
	/*salida*/
	printf("%f\n",sumador);
	return 0;
}

