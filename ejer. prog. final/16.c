#include <stdio.h>
/*16
Autores:equipo 8 
     Irving Baez, Joseph Canul
     Eliezer Couoh, Ignacio Panána
     Andres  Perez 29/Enero/17
Entradas: n (float), 
Salidas: promedio (float)
Procedimiento general:
 ciclo while para ingresar los valores de n
 que se acomulan en sumaN
y saca el promedio
y el if para evalue los negativos.
para cuando se ingrese un 0 finalice
*/
int main(int argc, char *argv[]) {
	/* con (int) contador 
	n (float) variable de entrada
	samaN sumador de n
	promedio (float) salida
	*/
	int cont=0;
	float n, sumaN=0.0, promedio=0.0;
	
	/* utiliza while que donde 
	se suma y sacfa el promedio
	y termina hasta encontrar un 0*/
	printf("Dar un valor positivo a MEDIAR, 0 para finalizar captura: ");
	while (n!=0){
		scanf("%f",&n);
		if (n>0){
			cont=cont+1;
			sumaN = sumaN+n;
			promedio = sumaN/cont;
		} else { if (n<0){
			printf("Valor no valido por ser negativo");}}
	}
	/*salida*/
	printf("El promedio de los valores dados es: %f ", promedio);
	
	
	return 0;
}
