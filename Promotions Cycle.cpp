#include <iostream>
#include <print>

#include "Path.h"
#include "Information.h"

void PromotionCycle(Game& game) {
	system("Clear");
	std::println("A cada quantos meses, vai ter uma semana de desconto?");
	std::cin >> game.promo.Months;

	std::println("Qual vai ser o desconto aplicado?");
	std::cin >> game.promo.Percentage;
}