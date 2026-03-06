#include <string>
#include <print>

#include "Path.h"
#include "Information.h"

void Math(Game& game) {
	double ValueIS{ 0.0 };
	int RealPlayers{ 0 };

	double ValuePerHour = game.ValuePerHour;

	// FORMULA DO VALOR FINAL;

	ValueIS = (ValuePerHour * game.time.Media);
	ValueIS = (static_cast<int>(ValueIS * 100) * game.ValuePerHour);
	ValueIS = (ValueIS * (1 + game.percentage.ErrorRate / 100));
	ValueIS = (ValueIS * (1 + game.percentage.Rate / 100));

	game.FinalValue = ValueIS;


	//|————————————————————————————————————————————————————————————|\\
	// CALCULO DE GANHO POR PRODUTO;


	game.ganho.ETP = (game.players.PlayersPerMonth * game.ProductMedia);


	//|————————————————————————————————————————————————————————————|\\
	// REGISTRA LUCRO:


	game.Lucro = (game.FinalValue * (1 - game.percentage.Rate / 100));


	//|————————————————————————————————————————————————————————————|\\
	// CALCULO DE GANHO POR COMPRAR:


	game.ganho.EarningByBuying = (game.players.PlayersPerMonth * game.Lucro);


	//|————————————————————————————————————————————————————————————|\\
	// REGISTRO DE GANHO POR MÊS & ANO:


	game.ganho.EarningByBuying = (game.players.PlayersPerMonth * game.Lucro);
	double Total = (game.ganho.EarningByBuying + game.ganho.ETP);

	game.ganho.EarningsPerMonth = Total;
	game.ganho.EarningsPerYear = (Total * 12);
}