#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int dig;

	for (dig = 0; dig <= 9; dig++)
	{
		if (dig != 2 && dig != 4)
			_putchar((dig % 10) + '0');
	}

	_putchar('\n');
}
