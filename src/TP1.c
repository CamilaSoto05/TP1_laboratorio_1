/*
 ============================================================================
 Name        : TP1.c
 Author      : Soto Camila Belen
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(void) {
	setbuf(stdout,NULL);

	int opcion;
	float kilometros=7090;
	float precioAereolineas= 1335000.66;
	float precioLatam=1350000.76;
	float debitoLatam;
	float debitoAereolineas;
	float creditoLatam;
	float creditoAereolineas;
	float bitcoinLatam;
	float bitcoinAereolineas;
	float unitarioLatam;
	float unitarioAereolineas;
	float diferenciaPrecios;


while(opcion<7)
{
	printf("\n1. Ingresar kilómetros. \n"
			"2. Ingresar precio de vuelos. \n"
			"3. Calcular todos los costos. \n"
			"4. Informas resultados. \n"
			"5. Carga forzada de datos. \n"
			"6. Salir. \n" );
	printf("\n Ingrese una opción: " );
	scanf ("%d", &opcion);

	switch(opcion)
		{
		case 1:
			printf("\nIngrese los kilometros: ");
			scanf("%f", &kilometros);
			if (kilometros<1)
				{
					printf("\nError. Debe ingresar los kilometros mayor a cero.");
				}
		break;
		case 2:
			printf("\nIngrese precio de vuelo Latam: ");
			scanf("%f", &precioLatam);

			printf("\nIngrese precio de vuelo Aereolineas: ");
			scanf("%f", &precioAereolineas);

		break;
		case 3:
			if (precioLatam==0 && precioAereolineas==0 && kilometros==0)
			{
				printf("\nError. Los precios y kilometros deben ser mayor a cero. Ingrese la opcion 1");
			}else
			{
				debitoLatam=descuentoL(precioLatam);
				creditoLatam= interesL(precioLatam);
				bitcoinLatam= bitcoinL(precioLatam);
				unitarioLatam= unitarioL(precioLatam, kilometros);

				debitoAereolineas=descuentoA(precioAereolineas);
				creditoAereolineas= interesA(precioAereolineas);
				bitcoinAereolineas= bitcoinA(precioAereolineas);
				unitarioAereolineas= unitarioA(precioAereolineas, kilometros);

				diferenciaPrecios= diferencia(precioLatam, precioAereolineas);
			}

		break;
		case 4:
			printf("\nPrecio Latam: $ %.2f"
							"\na) Precio con tarjeta de debito: $ %.2f"
							"\nb) Precio con tarjeta de credito: $ %.2f"
							"\nc) Precio pagando con bitcoin: BTC %.7f "
							"\nd) Precio unitario: $ %.2f", precioLatam, debitoLatam, creditoLatam, bitcoinLatam, unitarioLatam);
			printf("\nPrecio Aereolineas: $ %2.f"
							"\na)Precio con tarjeta de debito: $ %2.f"
							"\nb)Precio con tarjeta de credito: $ %.2f "
							"\nc)Precio pagando con bitcoin: BTC %.7f "
							"\nd)Precio unitario: $ %2.f",precioAereolineas, debitoAereolineas, creditoAereolineas, bitcoinAereolineas, unitarioAereolineas);
			printf("\nLa diferencia de precio es: $ %.2f \n", diferenciaPrecios);
		break;
		case 5:
			break;
		case 6:
			printf("\nSalir.");
			break;
		default: printf("\nLa opcion no es valida");
		}
}while (!(opcion<7));

return 0;

}
