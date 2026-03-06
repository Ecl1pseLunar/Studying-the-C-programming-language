#include "Path.h"
#include "Information.h"

void RbM(Game& game) {
	if (game.FinalValue >= 600) {
		game.FinalValue = (game.FinalValue * (1 - 40 / 100));
	}
	else if (game.FinalValue >= 1000) {
		game.FinalValue = (game.FinalValue / 2);
	}
	else if (game.FinalValue >= 1200) {
		game.FinalValue = 500;
	}
}