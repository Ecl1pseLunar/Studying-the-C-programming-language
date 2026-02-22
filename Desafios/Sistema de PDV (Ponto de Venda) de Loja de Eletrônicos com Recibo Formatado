#include <iostream> 
#include <Windows.h>
#include <vector>
#include <print>
#include <string>

struct Produto { // Base padrão para os produtos
	std::string nome;
	int id{};
	float valor{};
};

int main() {
	SetConsoleOutputCP(CP_UTF8); // Permite acentos

	std::vector<Produto> produtos{ // Essa variavel é uma lista
		{"Farinha", 1, 25.0f}, // Adicione quantos produtos deseja
		{"Chocolate", 2, 15.0f}, // Partir da base padrão
		{"Cafe", 3, 10.0f}, // Definido pelo struct Produto
	};

	std::vector<Produto> carrinho; // Criar uma nova lista "infinita" de nome carrinho
	float total_gasto = 0.0f;

	std::println("=== BEM VINDO AO MERCADO ===");

	for (const auto& prod : produtos) { // Essa função, pega produto por produto dentro da lista produtos
		std::println("Produto: {}, Valor: R${:.2f} (Pressione {})", prod.nome, prod.valor, prod.id); // printar o(s) nome(s), valor(es) e ID(s) do(s) produto(s)
	}

	std::println("\n(Pressione 0 a quaçquer momento para finalizar a compra)"); // print sometne um aviso

	while (true) { // criar um loop "infinito"
		int id_digitado{}; // salva o valor digitado
		std::print("Digite o codigo do produto");
		std::cin >> id_digitado; // recebe o valor selecionado no atalho

		if (id_digitado == 0) { // caso seja 0, quebra o loop e ir para o comprovante
			break; // break = "quebrar"
		}

		bool achou_produto = false;

		for (const auto& prod : produtos) { // pega produto por produto da lista produtos
			if (prod.id == id_digitado) { // compara o Id de cada produto pelo ID digitado

				carrinho.push_back(prod); // adiciona o Produto, que teve ser eu ID digitado, salvando na lista "infinita" carrinho
				total_gasto = total_gasto + prod.valor; // somar o gasto (0) + o valor do produto
				std::println(" >> {} adicionado ao carrinho", prod.nome);

				achou_produto = true; // Achou o produto
				break;	

			}
		}

		if (achou_produto == false) { // Se não achou o produto 
			std::println(">> Codigo invalido. Tente novamente."); // Dizer que o codigo está incorreto.
		}
	}
	std::println("\n\n=======================================");
	std::println("         COMPROVANTE DA COMPRA           ");
	std::println("=========================================");

	std::println("Itens comprados:");

	for (const auto& item : carrinho) { // pega cada item dentro do carinho
		std::println("- {} : R${:.2f}", item.nome, item.valor); // pega o nome e valor dos itens do carinho
	}

	std::println("---------------------------------------");
	std::println("Total a pagar: R${:.2f}", total_gasto); // total gasto
	std::println("======================================");

	return 0;
}

