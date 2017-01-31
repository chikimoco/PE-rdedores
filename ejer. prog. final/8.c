#include <stdio.h>
/* 8
Autores: Equipo 8 
     Irving Baez, José Canul
     Eliezer Couoh, Ignacio Panana
     Andrés Pérez 29 / Enero / 17
Entradas:num2, num1 (int)
Salidas: validacion de num2, num1 (int)
Procedimiento general:
en un ciclo if se evalua que se pueda dividir
si es asi se avalua que el modulo entre
num1 y num2 se igual a 0 para ser multiplos
*/
int main(int argc, char *argv[]) {
	/*entradas:
	num1, num2 (int) variables*/
	int num1, num2;
	printf ("introdusca el primer número\n");
	scanf ("%d", &num1);
	printf ("introdusca el segundo número\n");
	scanf ("%d", &num2);
	/*validacion para no dividir entre 0*/
	if (num2!=0) 
	{	
		/*se evalua el modulo para saber si es multiplo*/
		if (num1%num2==0)
	    {
/*salidas*/
		  printf ("%d es multiplo de %d\n",num1, num2 );
	    }
	    else
	    {
		printf ("%d No es multiplo de %d\n",num1, num2 );
	    }
	}
	else 
	{
		printf ("Por definicion los unicos multiplos de 0 son el cero, por lo tanto no son multiplos");
	}
	return 0;
}

