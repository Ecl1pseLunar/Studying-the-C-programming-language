#include <iostream>
#include <Windows.h>
#include <print>

#include "Path.h"
#include "Information.h"

void Traffic(Game& game) {
	SetConsoleOutputCP(CP_UTF8);

	system("Clear");
	std::println("Quantos jogadores vão comprar: ");
	std::cin >> game.players.PlayersPerDay;

	game.players.PlayersPerMonth = (game.players.PlayersPerDay * 30);
	game.players.PlayersPerYear = (game.players.PlayersPerMonth * 12);

	if (!game.Produtos.empty()) {
		std::println("A porcetagem dos jogadores por mês, que vai aproximamente comprar os produtos internos");
		std::cin >> game.percentage.MPC;
	}
}