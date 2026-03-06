#include <print>
#include <string>
#include <Windows.h>

#include "Path.h"
#include "Information.h"

void Final(Game& game) {
	system("Clear");
	SetConsoleOutputCP(CP_UTF8);
	
	double Difference = (game.FinalValue - game.DesiredValue);

	std::println("                   =======================");
	std::println("                   === RELATORIO FINAL ===");
	std::println("                   =======================");

	std::println("\n\n—> VALORES:\n\n");

	std::println("Valor RECOMENDADO: {:.2f}  | Diferença de {:.2f} do valor desejado", game.FinalValue, Difference);
	std::println("Valor desejado: {:.2f}", game.DesiredValue);
	std::println("Lucro: {:.2f}", game.Lucro);

	std::println("\n\n—> TEMPO:\n\n");

	std::println("Tempo Medio Calculado: {} Horas,  {} Minutos,  {} Segundos", game.time.Hours, game.time.Minutes, game.time.Seconds);

	std::println("\n\n—> GANHOS:\n\n");
	
	std::println("Ganho por mês: {:.2f}", game.ganho.EarningsPerMonth + game.ganho.GanhoPorProdutosMensalPorMes);
	std::println("Ganho por ano: {:.2f}", game.ganho.EarningsPerYear + game.ganho.GanhoPorProdutosMensalPorAno);
	
	std::println("\nGanho pela compras durante um mês: {:.2f}", game.ganho.EarningByBuying);

	//|——————————————————————————————————————————————————————————————————————————————————————————————————————|\\

	if (!game.Produtos.empty()) {

		std::println("Ganho por mês por causa dos produtos: {:.2f}", game.ganho.ETP);

		std::println("\nGanho por mês, por causa dos produtos mensais: {:.2f}", game.ganho.GanhoPorProdutosMensalPorMes);
		std::println("Ganho por ano, por causa dos produtos mensais: {:.2f}", game.ganho.GanhoPorProdutosMensalPorAno);

		std::println("\n\n—> PRODUTOS:\n");

		if (!game.Produtos.empty()) {
			for (auto& Produto : game.Produtos) {
				std::string ProductTypeVariable;

				switch (Produto.tipo)
				{
				case ProductType::Permanente:
					ProductTypeVariable = { "Permamente" };
					break;
				case ProductType::Mensal:
					ProductTypeVariable = { "Mensal" };
					break;
				case ProductType::ProdutDev:
					ProductTypeVariable = { "Consumivel" };
					break;
				default:
					ProductTypeVariable = { "Desconhecido" };
					break;
				}

				std::println("\nNome: {} \nTipo: {} \nValor: {:.2f} \nLucro: {:.2f}", Produto.Nome, ProductTypeVariable, Produto.valor, (Produto.valor * (1 - game.percentage.Rate / 100)));
			}
		}
	}
}