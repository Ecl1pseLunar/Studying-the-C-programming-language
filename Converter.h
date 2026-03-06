#include <iostream>
#include <string>

template <typename T>

int Converter(T valor) {
	std::string texto = std::to_string(valor);
	std::string numeros;

	for (char c : texto) {
		if (c != '.') {
			numeros += c;
		}
	}

	while (!numeros.empty() && numeros.back() == '0') {
		numeros.pop_back();
	}

	int Num = std::stoi(numeros);

	return Num;
}