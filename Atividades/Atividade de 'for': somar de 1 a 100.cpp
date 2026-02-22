// atividade COMPLETA
// Curso aula .82
// Criado 22/02/2026 (vou começa anota agora!)

#include <iostream> // entrada/saida
#include <print> // permite enviar um valor ao console

int main()
{
	int num = 0; // começa com 0, logo vai ser a somar 0 + 1 = 1
	for (int i = 0; i <= 100; ++i) { // faz um loop de 0 até 100, permitindo o num somar com esse
		// caso, esqueça = no (<=), como aconteceu comigo, ele chega somente até 99. Ficando com um valor: 4950
		// então, perceba esses detalhes importante
		num = num + i; // somar o próprio com o proximo. Ex: 0+1 = 1 > 1+2 = 3 > 3+3 = 6 > 6+4 = 10;
		std::println("A somar dos valores: {}", num);
	};
	system("Pause"); // pausar o console, após o loop.
}
