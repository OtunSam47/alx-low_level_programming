#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 * @n: The number of / characters to be printed.
 */
void print_diagonal(int n)
{
	int count;

	if (n > 0)
	{
	for (count = 0; count < n; count++)
		_putchar("\\\n");
	}

	_putchar('\n');
}
