#include <stdio.h>
/*48
Autores: Equipo 8 
     Irving Baez, José Canul
     Eliezer Couoh, Ignacio Panana
     Andrés Pérez 29 / Enero / 17
Entradas: anti(int) salario (int) trab (int)
Salidas:incentivo (float) 
Procedimiento general:
se da el la cantidad de trabajadores,
ciclo for para leer datos de los trabajadores
se toman los if para poder evaluar su antiguedad y sueldo
para despues asignar su incentivo
*/
int main(int argc, char *argv[]) {
	/*entrada:
	anti (int) antigüedad, salario (float), trab (int) trabajadores
	con contador, incentivo donde se refleja el bono
	*/
	int anti = 0, con=1, trab;
	float salario = 0.0, incentivo = 0.0;
	printf ("ingresa la cantidad de trabajadores\n");
	scanf ("%d",&trab);
	/*entra en ciclo para ingresar los salarios y antiüedad
	de los trabajadores que se dieron*/
	for (con=1; con<=trab; con++)
	{
		printf("Dar antiguedad del trabajador a evaluar \n ");
		scanf("%d", &anti);
		/* se evalua su antiguedad para asignar incentivo*/
	    if (0 < anti && anti <= 15)
		{
			printf("Dar el valor del salario actual del empleado \n");
			scanf("%f",&salario);
			if (anti>0 && anti<4)
			{ 
				incentivo = salario*1.01;
			}
			else 
			{
				if (anti>3 && anti<7)
				{ 
					incentivo = salario*1.03;
				}
				else 
				{
					if(anti>6 && anti<10)
					{
						incentivo = salario*1.05;
					}
					else 
			        {
					incentivo = salario*1.07;
				    }
				}
			}
/*salidas*/
			printf("Sabiendo que el sueldo actual del empleado es: %f y su antiguedad actual es %d su incentivo sera de %f\n\n",salario,anti,incentivo);
		}
		else 
		{
			printf("Valor de antiguedad fuera de rango\n\n");
		}
	}
	return 0;
}

