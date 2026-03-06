#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include <print>

#include "Path.h"
#include <Information.h>


int main()
{
	Game game;

	std::println("Digite o nome do jogo: ");
	std::getline(std::cin, game.Nome);

	std::println("Digite o valor do jogo desejado: ");
	std::cin >> game.DesiredValue;

	Margem(game); // Interface de margem de lojas
	GameTime(game); // Interface de tempo de jogabilidade
	//PromotionCycle(game); (EM BREVE) // Em breve; era para ter um sistema de promação
	Microtransactions(game); // Pergunta, se tem microtransações presente no jogo
	Traffic(game); // Calcula a quantidade de jogadores por dia, e a porcentagem do total do mes que vai comprar os produtos internos (microtransações)
	Relative(game);
	Math(game); // Fazer todo o calculo, resolvendo e entregando os resultados
	Time(game); // Fazer um formula, para calcula; Horas, minutos e segundos corretamente
	Final(game); // Mostra a interface de relátorio para o usuário com todos os resultados

	std::println("\Pressione Enter para sair...\n");
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}