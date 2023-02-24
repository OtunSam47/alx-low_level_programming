#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */

void print_line(int n)
{
	int count;

	if (n > 0)

	{
	for (count = 0; count < n; count++)
		_putchar('_');
	}
	_putchar('\n');
}
