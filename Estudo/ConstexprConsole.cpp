// Somente um código simples, para testar o constexpr

#include <iostream>
#include <Windows.h>
#include <print>

constexpr int dobrar(int n, int m) { // não estava no meu curso, más queria sabe!
	return (n * m); // 
}

int main()
{
	SetConsoleOutputCP(CP_UTF8); // permite acentos

	int resultado{};
	int valor{};
	int multiplicador{};

	std::println("Me informe o valor (n 'espaço' m): ");
	std::cin >> std::ws >> valor >> std::ws >> multiplicador;

	resultado = dobrar(valor, multiplicador);

	std::println("O resultado é: {}", resultado);
}
