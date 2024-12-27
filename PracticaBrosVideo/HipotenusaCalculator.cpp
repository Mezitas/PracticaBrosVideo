#include "HipotenusaCalculator.h"
#include <iostream>
#include <cmath>

double hipotenuseCalculator() {
	double base, altura, hipotenusa;
	std::cout << "Escribe la altura del triangulo" << std::endl;
	std::cin >> altura;
	std::cout << "Escribe la base del triangulo" << std::endl;
	std::cin >> base;
	hipotenusa = sqrt(pow(altura,2)+pow(base,2));
	return hipotenusa;
}