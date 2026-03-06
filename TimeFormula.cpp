#include <iostream>
#include <type_traits>
#include <cmath>
#include <print>

#include "Path.h"
#include "Converter.h"
#include "Information.h"

void Time(Game& game) {
	double valor = game.time.Media;

	int Horas = static_cast<int>(valor);

	double resto = valor - Horas;
	
	double minutesD = resto * 60.0;
	int Minutes = static_cast<int>(minutesD);

	double restoMinutes = minutesD - Minutes;
	int Segundos = static_cast<int>(std::round(restoMinutes * 60.0));
	
	if (Minutes == 60) {
		Minutes = 0;
		++Minutes;
	}

	if (Segundos == 60) {
		Segundos == 0;
		++Segundos;
	}

	game.time.Hours = Horas;
	game.time.Minutes = Minutes;
	game.time.Seconds = Segundos;
}