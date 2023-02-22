#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alpha_bet;

	while (count++ <= 9)
	{
		for (alpha_bet = 'a'; alpha_bet <= 'z'; alpha_bet++)
			_putchar(alpha_bet);
		_putchar('\n');
	}
}
