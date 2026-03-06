#include <iostream>
#include <print>

#include "Path.h"
#include <Information.h>

void Margem(Game& game) {
	Taxa tax;

	int Index;

	system("Clear");

	std::println("=== MARGEM: LOJA ===");
	std::println("Qual vai ser a loja que seu jogo estara: (Digite o NUMERO)");
	std::println("1 - Steam [+30%]");
	std::println("2 - PlayStation, Xbox e Nintendo [+30%]");
	std::println("3 - Epic Games Store e Microsoft Store [+12%]");
	std::cin >> Index;

	if (!(Index >= 3)) {
		std::println("Taxa de 30% foi aplicado!");
		game.percentage.Rate = tax.BestStores;
	}
	else
	{
		std::println("Taxa de 12% foi aplicado!");
		game.percentage.Rate = tax.OtherStores;
	}
}