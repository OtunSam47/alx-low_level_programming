#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int dig, count;

	for (count = 0; count <= 9; count++)
	{
		for (dig = 0; dig <= 14; dig++)
		{
			if (dig > 9)
				_putchar((dig / 10) + '0');
			_putchar((dig % 10) + '0');
		}
		_putchar('\n');
	}
}
