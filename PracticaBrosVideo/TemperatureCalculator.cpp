//.h document
#include "TemperatureCalculator.h"
//basic libraries
#include <iostream>
#include <vector>
std::string tipoT(int tipo) {
	std::vector<std::string> tipoT = { "Celcius","Fahrenheite","kelvin" };
	return tipoT[tipo];
}
double AgregarValor(int tipo) {
	double valor;
	std::cout << "Escribe la temperatura en "<<tipoT(tipo)<< ": __";
	std::cin >> valor;
	return valor;
}
double CeToFa() {
	double tempI = AgregarValor(0);
	return (tempI * 9 / 5) + 32;
}
double CeToKe() {
	double tempI = AgregarValor(0);
	return tempI+273.15;
}
double FaToCe() {
	double tempI = AgregarValor(1);
	return (tempI - 32) * 5 / 9;
}
double KeToCe() {
	double tempI = AgregarValor(2);
	return tempI - 273.15;
}
double KeToFa() {
	double tempI = AgregarValor(2);
	return (tempI * 9 / 5) - 459.67;
}
int MenuInteractivo(int eleccion) {
	switch (eleccion)
	{
	case 1:
		std::cout << "Temperatura en " << tipoT(1) << "= __" << CeToFa() << std::endl;
		break;
	case 2:
		std::cout << "Temperatura en " << tipoT(2) << "= __" << CeToKe() << std::endl;
		break;
	case 3:
		std::cout << "Temperatura en " << tipoT(0) << "= __" << FaToCe() << std::endl;
		break;
	case 4: 
		std::cout << "Temperatura en " << tipoT(0) << "= __" << KeToCe() << std::endl;
		break;
	case 5:
		std::cout << "Temperatura en " << tipoT(1) << "= __" << KeToFa() << std::endl;
		break;
	case 6:
		eleccion = 0;
		std::cout << "Chaooo!!" << std::endl;
		break;
	default:
		std::cout << "Escoge un elemento dentro del rango (1-6)" << std::endl;
		break;
	}
	return eleccion;
}
void MenuRepeticion() {
	int eleccion = 1;
	while (eleccion != 0) {
	std::cout << "************ CALCULADORA DE TEMPERATURAS ************" << std::endl;
	std::cout << "Elige la conversion que quieras hacer: " << std::endl;
	std::cout << "1) " << tipoT(0) << " a " << tipoT(1) << "\n";
	std::cout << "2) " << tipoT(0) << " a " << tipoT(2) << "\n";
	std::cout << "3) " << tipoT(1) << " a " << tipoT(0) << "\n";
	std::cout << "4) " << tipoT(2) << " a " << tipoT(0) << "\n";
	std::cout << "5) " << tipoT(2) << " a " << tipoT(1) << "\n";
	std::cout << "6) Salir" << std::endl;
	std::cin >> eleccion;
	
	eleccion=MenuInteractivo(eleccion);
	system("pause");
	system("cls");
	}
}