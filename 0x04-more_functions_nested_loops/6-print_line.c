#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 */

void print_line(int n)
{
	int n;
	int count;

	for (count = 0; count < n; count++)
	{
	if (n <= 0)
		_putchar("\n");
	_putchar("_");
	}
	_putchar("\n");
}
