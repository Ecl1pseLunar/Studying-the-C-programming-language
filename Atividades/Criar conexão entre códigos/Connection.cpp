// Criado Quando: 25/02/2026;
// Finalizado quando: 26/02/2026;
// Qual horario: 11:10;
// Oque aprendeu:

// A comunicação e como criar minha própria "biblioteca";
// O uso correto e recomendado do cast;
// A diferença e varios "tipos" de cast;
// Como funciona a conversão entre dois valores de tipos diferentes;
// Vendo mais uma vez, que o compilador é interligente demais

#include <iostream>
#include <Windows.h>
#include <print>

#include "Ponte.h"

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	
	int num1, num2;
	std::println("Digite dois valores: ");
	std::cin >> num1 >> num2;

	std::println("O resultado da Soma: {}", Soma(num1, num2));
	std::println("O resultado da Subtraição: {}", Subtrair(num1, num2));
	std::println("O resultado da Multiplicação: {}", Multiplicar(num1, num2));
	std::println("O resultado da Divisão: {:.3f}", Divide(num1, num2));
	std::println("O resultado da Potencia: {}", Potencia(num1, num2));
	std::println("O resultado da Raiz: {}", Raiz(num1, num2));
}
