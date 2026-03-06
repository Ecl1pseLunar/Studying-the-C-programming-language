#include <string>
#include <print>

#include "Path.h"
#include "Information.h"

void Relative(Game& game) {
	double GanhoTotalMes{ 0.0 };

	for (auto& Produto : game.Produtos) {
		std::string TypeVariable;

		switch (Produto.tipo)
		{
		case ProductType::Permanente:
			TypeVariable = { "Permamento" };
			break;
		case ProductType::Mensal:
			TypeVariable = { "Mensal" };
			break;
		case ProductType::ProdutDev:
			TypeVariable = { "Consumivel" };
			break;
		default:
			TypeVariable = { "Desconhecido" };
			break;
		}

		if (TypeVariable == "Mensal") {
			float mpc = game.percentage.MPC;
			float PartePorcento = (mpc / 2 * (1 + 10 / 100));

			int PlayersMensal = game.players.PlayersPerMonth * (PartePorcento / 100);

			for (int i = 0; i < PlayersMensal; ++i) {
				GanhoTotalMes += Produto.valor; // por que ele não chamar ?
			}
		}
	}



	game.ganho.GanhoPorProdutosMensalPorMes = GanhoTotalMes;
	game.ganho.GanhoPorProdutosMensalPorAno = (GanhoTotalMes * 12);
}