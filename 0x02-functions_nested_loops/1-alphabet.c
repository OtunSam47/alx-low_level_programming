#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char alpha_bets;

	for (alpha_bets = 'a'; alpha_bets <= 'z'; alpha_bets++)
		_putchar(alpha_bets);

	_putchar('\n');

}
