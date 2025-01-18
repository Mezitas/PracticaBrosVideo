//.h document
#include "NumberGamer.h"
//libraries
#include <iostream>
#include <ctime>

int Number_Generator() {
	srand(time(0));
	return rand() % 100 + 1;
}
bool overTries(int tries) {
	return tries <= 3;
}
int comprobator_number(int Ran_number) {
	int number;
	std::cout << "write a number:___ ";
	std::cin >> number;
	if (Ran_number<number) {
		return -1;
	}
	else if(Ran_number>number){
		return 1;
	}
	else {
		return 0;
	}
}
int mensajes(int numero) {
	int addTries=1;
	switch (comprobator_number(numero)) {
	case 1:
		std::cout << "El numero que escribiste es menor..." << std::endl;
		break;
	case -1:
		std::cout << "El numero que escribiste es mayor..." << std::endl;
		break;
	case 0:
		std::cout << "Adivinaste el numero!!! Felicitaciones <3" << std::endl;
		addTries = 0;
		break;
	}
	return addTries;
}
void repeat(int number) {
	int tries=0;
	int NewNumber;
	while (overTries(tries)) {
		NewNumber=mensajes(number);
		if (NewNumber == 0) {
			break;
		}
		else {
			tries += NewNumber;
			std::cout << "Intentos:___ " << 4 - tries << std::endl;
		}
	}
	if (tries > 3) {
		std::cout << "El numero era: ___ " << number << std::endl;
	}
}
void Main_NumberGamer(){
	int Ran_number = Number_Generator();
	repeat(Ran_number);
}