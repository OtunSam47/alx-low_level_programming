#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int dig;

	for (dig = 0; dig <= 9; dig++)
		_putchar((dig % 10) + '0');

	_putchar('\n');
}
