#include "main.h"

/**
 *
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 *  Return: Always 0.
 */
void print_alphabet(void)
{
	char alpha_bets;

	for (alpha_bets = 'a'; alpha_bets <= 'z'; alpha_bets++)
		_putchar(alpha_bets);

	_putchar('\n');

}
