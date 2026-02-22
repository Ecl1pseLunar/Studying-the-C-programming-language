#include <iostream>
#include <Windows.h>
#include <print>

inline void quest(std::string& resposta) {
	std::println("\nPressione sim para continuar, não para sair...:");
	std::cin >> resposta;
	std::println("\n\n");
}

int main()
{
	float num1, num2;
	char operador{};
	std::string resposta{};

	SetConsoleOutputCP(CP_UTF8);

	do{
		
		std::println("Por favor escolhe dois valores: ");
		std::cin >> num1 >> num2;

		std::println("Escolha qual vai ser a operação: \n(Exemplo: subtrair, somar, etc..)");
		std::cin >> operador;

		switch (operador)
		{
		case '-':
			std::println("Subtraindo... {:.2f} - {:.2f} = {:.2f}\n", num1, num2, (num1 - num2));
			quest(resposta);
			break;
		case '+':
			std::println("Somando... {:.2f} + {:.2f} = {:.2f}\n", num1, num2, (num1 + num2));
			quest(resposta);
			break;
		case '*':
			std::println("Multiplicando... {:.2f} x {:.2f} = {:.2f}\n", num1, num2, (num1 * num2));
			quest(resposta);
			break;
		case '/':
			std::println("Dividindo... {:.2f} / {:.2f} = {:.2f}\n", num1, num2, (num1 / num2));
			quest(resposta);
			break;
		default:
			break;
		}
	} while (resposta == "Sim" || resposta == "sim");

	return 0;
}
