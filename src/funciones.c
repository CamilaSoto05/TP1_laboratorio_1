/*
 * funciones.c
 *
 *  Created on: 15 abr. 2022
 *      Author: sotoc
 */


float descuentoL (float precioLatam)
{
	float descuento =0.9;
	float precioDebitoLatam;
	precioDebitoLatam = precioLatam*descuento;

	return precioDebitoLatam;
}

float descuentoA (float precioAereolineas)
{
	float descuento =0.9;
	float precioDebitoAereolineas;
	precioDebitoAereolineas=precioAereolineas*descuento;

	return precioDebitoAereolineas;
}

float interesL (float precioLatam)
{
	float interes= 1.25;
	float precioCreditoLatam;
	precioCreditoLatam=precioLatam*interes;

	return precioCreditoLatam;
}

float interesA (float precioAereolineas)
{
	float interes=1.25;
	float precioCreditoAereolineas;
	precioCreditoAereolineas=precioAereolineas*interes;

	return precioCreditoAereolineas;
}

float bitcoinL (float precioLatam)
{
	float precioBitcoin= 4608626.03;
	float precioBitcoinLatam;
	precioBitcoinLatam=precioLatam/precioBitcoin;

	return precioBitcoinLatam;
}

float bitcoinA (float precioAereolineas)
{
	float precioBitcoin= 4608626.03;
	float precioBitcoinAereolineas;
	precioBitcoinAereolineas=precioAereolineas/precioBitcoin;

	return precioBitcoinAereolineas;
}
float unitarioL (float precioLatam, float kilometros)
{
	float precioUnitarioLatam;
	precioUnitarioLatam= precioLatam/kilometros;

	return precioUnitarioLatam;
}

float unitarioA (float precioAereolineas, float kilometros)
{
	float precioUnitarioAereolineas;
	precioUnitarioAereolineas=precioAereolineas/kilometros;

	return precioUnitarioAereolineas;
}

float diferencia(float precioLatam, float precioAereolineas)
{
	int respuesta;

	if(precioLatam>precioAereolineas)
	{
		respuesta=precioLatam-precioAereolineas;
	}else
		{
			respuesta= precioAereolineas-precioLatam;
		}

	return respuesta;
}


