
#include "pch.h"
#include <iostream>
#include <sstream>

using namespace std;

const	int valor_tamanio = 100;

int main()
{
	int vector1[valor_tamanio];
	int vector2[valor_tamanio];
	int vector3[valor_tamanio];
	int n;
	int par=0;
	int impar = 1;

	cout << "Digite la cantidad de valores que tendran los vectores: ";
	cin >> n;

	/*for (int index = 0; index < n; index++)
	{
		cout << "Ingrese un numero entero para el primer vector: ";
		cin >> vector1[index];

		if (index == impar)
		{
			vector3[index] = vector1[index];
			impar += 2;
		}
	}
	
	for (int index = 0; index < n; index++)
	{
		cout << "Ingrese un numero entero para el segundo vector: ";
		cin >> vector2[index];

		if (index == par)
		{
			vector3[index] = vector2[index];
			par += 2;
		}
	}
	*/

	for (int index = 0; index < n; index++)
	{
		cout << "Ingrese el valor del espacio " << index << " perteneciente al primer vector: ";
		cin >> vector1[index];

		cout << "Ingrese el valor del espacio " << index << " perteneciente al segundo vector: ";
		cin >> vector2[index];
		
		if ((index % 2 == 0) || index == 0){
			vector3[index] = vector2[index];
		}

		else{
			vector3[index] = vector1[index];
		}
	}

	for (int index = 0; index < n; index++)
	{
		cout << "El tercer vector tiene en la posicion de memoria numero " << index<<" el valor: " << vector3[index]<<endl;
	}

}