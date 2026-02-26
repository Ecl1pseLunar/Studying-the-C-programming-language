#include <cmath>
#include "Ponte.h"

// Totalmente possivel converter um int em decimal, más não recomendado fazer oposto, por causa da perda de dados
// Int (30) > Casas Decimais (30.0)
// Casas Decimais (3.14321...) > Int (3)
// Ele perder todos os dados decimais após a conveção!

int Soma(int Num1, int Num2) {
	return (Num1 + Num2);
}

int Subtrair(int Num1, int Num2) {
	return (Num1 - Num2);
}

int Multiplicar(int Num1, int Num2) {
	return (Num1 * Num2);
}

double Divide(int Num1, int Num2) {
	return static_cast<double>(Num1) / Num2; // Essa valor e formula está correta, por primeiro ele tornar o Num1 em decimal (ex: 7.0)
}
// Depois, o Num2 continuar int, más sendo (ex: 2), então ela divide 7.0 em 2. O compilador sendo interligente, retorna 3.5.
// Caso, o cast pegasse tudo, ele somente ira tornar o resultado em decimal, más os dados das casas ja teriam sido apagado;

int Potencia(int Num1, int Num2) {
	return pow(Num1, Num2);
}

float Raiz(int Num1, int Num2) {
	return sqrt(Num1 + Num2);
}
