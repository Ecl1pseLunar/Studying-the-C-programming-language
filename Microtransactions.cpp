#include <print>
#include <algorithm> // Necessário para std::max
#include <Windows.h>
#include <iostream>
#include <string>

#include "Information.h"

std::string Resposta{};

std::string Nome;
int Tipo;
float Valor;

static bool EhSim(const std::string& r) {
	// Retorna true se a resposta for alguma variação de "sim"
	return (r == "Sim" || r == "sim" || r == "S" || r == "s");
}

void Microtransactions(Game& game) {
	SetConsoleOutputCP(CP_UTF8);

	ProductType TipoDoProduto;

	system("Clear");

	std::println("Informe me, se o seu jogo possui Microtransações?");
	std::println("(Sim ou Não)");
	std::cin >> Resposta;
	std::cin.ignore();

	if (!EhSim(Resposta)) {
		return;
	}

	do {
		system("Clear");

		std::println("Qual é o nome do produto: ");
		std::getline(std::cin, Nome);

		if (Nome.empty()) {
			system("Clear");
			//std::println("\n\nNome não pode ficar vazio. Tente novamente.\n\n");
			continue;
		}
		
		std::println("Qual é o tipo: (Digite o nome do Tipo Corretamete) ");
		std::println("1 - Permamente [Compra uma vez, fica para sempre]");
		std::println("2 - Mensal [Pagar por mês]");
		std::println("3 - Produto Dev [Pode ser compradas mais de uma vez]");

		std::cin >> Tipo;
		
		bool TipoValido{ true };

		switch (Tipo)
		{
		case 2:
			TipoDoProduto = ProductType::Mensal;
			break;
		case 1:
			TipoDoProduto = ProductType::Permanente;
			break;
		case 3:
			TipoDoProduto = ProductType::ProdutDev;
			break;
		default:
			std::println("Tipo inválido! digite 1, 2 ou... 3");
			TipoValido = false;
			break;
		}

		if (!TipoValido) {
			continue;
		}

		std::println("Valor do produto {}:", Nome);
		std::cin >> Valor;

		game.Produtos.push_back({Nome, TipoDoProduto, Valor});



		double total{ 0.0 };

		for (auto& produt : game.Produtos) {
			total += produt.valor;
		}

		game.TotalProducts = total;
		game.ProductMedia = (total / game.Produtos.size()) * (1 - game.percentage.Rate / 100);

		std::println("Produto adicionado com sucesso!");
		std::println("Total de produtos cadastrados: {}", game.Produtos.size());
		std::println("A media: {}", game.ProductMedia);

		std::println("Deseja continuar? (Digite Sim ou Não)");
		std::cin >> Resposta;

	} while (EhSim(Resposta));


	return;
}

