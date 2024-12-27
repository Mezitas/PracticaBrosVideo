//_h document
#include "CalculadoraSimple.h"
//basic libraries
#include <iostream>
#include <cmath>
double agregarNumero() {
	double numero;
	std::cout << "Escribe un numero..." << std::endl;
	std::cin >> numero;
	return numero;
}
double suma() {
	double respuesta=0;
	double numero=agregarNumero();
	std::cout << numero << " + " << "__" << "\n";
	double nuevo = agregarNumero();
	std::cout << numero << " + " << nuevo << " = ";
	respuesta = numero + nuevo;
	return respuesta;
}
double resta() {
	double respuesta = 0;
	double numero = agregarNumero();
	std::cout << numero << " - " << "__" << "\n";
	double nuevo = agregarNumero();
	std::cout << numero << " - " << nuevo << " = ";
	respuesta = numero - nuevo;
	return respuesta;
}
double multi() {
	double respuesta = 0;
	double numero = agregarNumero();
	std::cout << numero << " * " << "__" << "\n";
	double nuevo = agregarNumero();
	std::cout << numero << " * " << nuevo << " = ";
	respuesta = numero * nuevo;
	return respuesta;
}
double div() {
	double respuesta = 0;
	double numero = agregarNumero();
	std::cout << numero << " / " << "__" << "\n";
	double nuevo = agregarNumero();
	if (nuevo == 0) {
		throw std::logic_error("No se puede dividir por cero");
	}
	std::cout << numero << " / " << nuevo << " = ";
	respuesta = numero * nuevo;
	return respuesta;
}
int menu() {
	double anterior=0;
	int value;
	if (anterior != 0) {
		std::cout << anterior << std::endl;
	}
	std::cout << "Escoge la operacion que quieras" << std::endl;
	std::cout << "1) Suma" << "\n";
	std::cout << "2) Resta" << "\n";
	std::cout << "3) multiplicacion" << "\n";
	std::cout << "4) Division" << "\n";
	std::cout << "5) Salir" << std::endl;
	std::cin >> value;
	switch (value)
	{
	case 1:
		std::cout << suma() << std::endl;
		break;
	case 2:
		std::cout << resta() << std::endl;
		break;
	case 3:
		std::cout << multi() << std::endl;
		break;
	case 4: 
		try {
			std::cout << div() << std::endl;
		}
		catch (const std::logic_error &error) {
			std::cerr << error.what() << std::endl;
			return 4;
		}
		
		break;
	case 5:
		std::cout << "Hasta la proxima!!..." << std::endl;
		break;
	default:
		std::cout << "Escribe un valor dentro de los parametros (1-5)" << std::endl;
		value = 0;
		break;
	}
return value;
}
void repeat() {
	int loop = 1;
	while (loop<5)
	{
		loop = menu();
			system("Pause");
			system("cls");
	}
}



