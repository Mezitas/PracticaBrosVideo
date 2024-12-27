#include <iostream>
#include<string>
#include<vector>
//archivo .h
#include "WordGenerator.h"

void write() {
	std::string word;
	std::vector<char> write;
	std::cout << "Escribe la palabra que quieras generar:___" << std::endl;
	std::getline(std::cin, word);
	for (int i = 0; i < word.size(); i++) {
		for (int j =97; j <= 122; j++) {
			for (int l = 0; l < write.size(); l++) {
				std::cout << write[l];
			}
			std::cout << (char)j<<std::endl;
				if ((char)j == word.at(i)) {
				write.push_back((char)j);
				j = 122;
			}
		}
	}
}