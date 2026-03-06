#include <iostream>
#include <Windows.h>
#include <print>

#include "Path.h"
#include "Information.h"

void GameTime(Game& game) {
	SetConsoleOutputCP(CP_UTF8);

	system("Clear");

	std::println("=== PAGINA DO TEMPO ===");
	std::println("Me informe o tempo estimado minimo que os jogadores vão jogar o seu jogo");
	std::cin >> game.time.Minimo;

	std::println("\nMe informe o tempo estimado recomenado que os jogadores vão jogar o seu jogo?");
	std::cin >> game.time.Recomendado;

	std::println("Me informe o tempo estimado mais alta (possivel) que os jogadores vão jogar?");
	std::cin >> game.time.Alto;

	game.time.Media = (game.time.Minimo + game.time.Recomendado + game.time.Alto / 4);
}