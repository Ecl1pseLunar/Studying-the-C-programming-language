#include <iostream>
#include <Windows.h>
#include <print>

inline void sucess(int number, std::string& resposta) { // criar uma função
	std::println("\n[Sucesso] O ticket número {} comprado\n\n", number);
	std::println("Deseja continuar (Sim ou Não): ");
	std::cin >> resposta;
}

int main()
{
	SetConsoleOutputCP(CP_UTF8); // permite acentos

	std::string resposta;
	int res{};

	do {
		std::print("\033[H\033[2J"); // simular uma limpeza
		std::println("Bem vindo ao cinema, poderia escolhe o ticket:\n ");
		std::println("1 - Meia entrada - Valor r$34,90; \n2 - ticket completo - Valor r$65,90; \n3 - Sair!\n");
		std::println("Escolhe sua opção: ");
		std::cin >> res;

		switch (res)
		{
		case 1: // meia entrada
			sucess(res, resposta);
			break;
		case 2: // ticket completo
			sucess(res, resposta);
			break;
		case 3: // escolhe para sair
			std::println("Saindo...");
			exit(0); // saindo
			break;
		default:
			std::println("Opção incorreto!");
			break;
		}
	} while (resposta == "Sim" || resposta == "sim"); // opção de escolha de continuar

	exit(0);
}
