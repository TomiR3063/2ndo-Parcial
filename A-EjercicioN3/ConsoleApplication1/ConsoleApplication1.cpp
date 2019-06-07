
#include "pch.h"
#include <iostream>
#include <sstream>

using namespace std;

int factorial(int numero) {
	int resultado_de_factorial;
	if (numero == 0)
	{
		resultado_de_factorial = 1;
	}

	else
	{
		resultado_de_factorial = numero * factorial(numero - 1);
	}
	return resultado_de_factorial;
}

int main()
{
	int numero;

	cout << "Ingrese un numero para obtener el factorial ";
	cin >> numero;
	
	cout << "El factorial es: " << factorial(numero);
}

