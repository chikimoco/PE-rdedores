#include <stdio.h>
/*32
Autores: Equipo 8 
     Irving Baez, José Canul
     Eliezer Couoh, Ignacio panana
     Andrés Pérez 29 / Enero / 17
Entradas: ano1 ano2 (int)
Salidas: bisiestos (int)
Procedimiento general:
ciclo for donde se va validando en un if los años
desde el año menor hasta el mayor para sacar los bisiestos
siendo que el año sea multiplo de 4 pero no de 100
y si es de cien que sea multiplo de 400 para ser bisiesto
*/
int main(int argc, char *argv[]) {
	/* entrada:
	ano1 y ano2 (int) variable de netrada
	bisiestos (int) salida y contador de años
	anomenor anomayor para establecer el rango de los años dados
	*/
	int ano1=0, ano2=0, bisiestos=0, anomenor =0, anomayor =0;
	
	printf("Dar un valor para el primer ano a evaluar : ");
	scanf("%d",&ano1);
	printf("Dar un valor para el primer ano a evaluar : ");
	scanf("%d",&ano2);
	/* se acomoda del año mas chico al mas
	grande de los valores dados*/
	if (ano1<ano2){
		anomenor = ano1;
		anomayor = ano2;
	} 
	else {
		anomenor = ano2;
		anomayor = ano1;
	}
	/*se va validando los años que hay del rango dado*/
	for (anomenor=anomenor; anomenor <= anomayor; anomenor++)
	{
		/* se valida si es multiplo de 4 pero no de 100
		o si es de cien que sea multiplo de 400*/
		if((anomenor%4==0 && anomenor%100!=0)||(anomenor%400==0)){
			bisiestos = bisiestos + 1;
		} }
	/*salida*/
	printf("El numero de anos bisiestos entre los anos dados es: %d\n", bisiestos);
	
	return 0;
}
