#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int len1, len2;

	if (size > 0)
	{
		for (len1 = 0; len1 < size; len1++)
		{
			for (len2 = 0; len2 < size; len2++)
				_putchar('#');

			if (len1 == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
