#include "logic.h"

bool is_the_perfect_number(long long number) {

	switch (number) {
	case 6:
	case 28:
	case 496:
	case 8128:
	case 33550336:
	case 8589869056:
	case 137438691328:
		return true;
	default:
		return false;
	}
}