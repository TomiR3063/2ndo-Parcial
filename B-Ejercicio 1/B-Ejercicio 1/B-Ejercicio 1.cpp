// B-Ejercicio 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <sstream>

using namespace std;

struct Automovil {
	string marca;
	string modelo;
	string anio_de_fabricacion;
	double valorResidual;
	double kmRecorridos;
};

struct Factura {
	string fecha;
	string comprador;
};

enum Gama
{
	 alta = 1, media = 2, baja = 3
}; 

enum forma_de_pago
{
	contado = 1, financiado = 2, parcialmentefiananciado = 3
};

enum Tipo_factura
{
	a = 1, b = 2, c = 3 
};

Automovil *automovilCreate(string marca, string modelo, string anio_de_fabricacion, double valorResidual, double kmRecorridos) {
	Automovil * unAutomovil = new Automovil;
	unAutomovil->marca = marca;
	unAutomovil->modelo = marca;
	unAutomovil->anio_de_fabricacion = anio_de_fabricacion;
	unAutomovil->valorResidual = valorResidual;
	unAutomovil->kmRecorridos = kmRecorridos;
	return unAutomovil;
}

Factura *facturaCreate(string fecha, string comprador) {
	Factura * unaFactura = new Factura;
	unaFactura->fecha = fecha;
	unaFactura->comprador = comprador;
	return unaFactura;
}




int main()
{
}