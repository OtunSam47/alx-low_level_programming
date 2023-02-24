#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: The number of _ characters to be printed.
 */

void print_line(int n)
{
	int count;

	if (n > 0)

	{
	for (count = 0; count < n; count++)
		_putchar("_");
	}
	_putchar("\n");
}
