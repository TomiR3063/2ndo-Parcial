
#include "pch.h"
#include <iostream>
#include <sstream>

using namespace std;
const int cantMax = 5;

int maquinaMasUtilizada()
{
	int horas = 0;
	int cant_maquinas = 0;
	int contadorHorasMaquina = 0;
	int punteroMaquina = 0;

	for (int i = 0; i < cant_maquinas; i ++) {
		
		cout << "Ingrese la cantidad de horas que se utilizo la maquina " << i;
		cin >> horas;

		if (horas > contadorHorasMaquina )
		{
			contadorHorasMaquina = horas;
			punteroMaquina = i;
		}
	}
	cout << "La maquina mas utilizada fue: " << punteroMaquina;
	return punteroMaquina;
}


int main()
{
	int jugadores[cantMax];
	int maquinas[cantMax];
	int cantVeces = 0;
	int sumadorVicio = 0;
	int posicionMayorVicio = 0;
	int maquinaMasUtilizadaa = 0;
	int jugador_maquina=0;
	int punteroJugadorMaquina=0;

	for (int i = 0; i < cantMax; i++) {
		cout << "¿Cuantas veces jugo el jugador numero " << i + 1 << "?";
		cin >> cantVeces;
	
		//Consigna B//
		if (cantVeces > sumadorVicio)
		{
			sumadorVicio = cantVeces;
			posicionMayorVicio = i;
		}

	}
	cout << "El jugador numero " << posicionMayorVicio << " es el mas vicio."<<endl;
		
	int resultado = maquinaMasUtilizada();