#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int val, val_2, result;

	for (val = 0; val <= 9; val++)
	{
		_putchar('0');

		for (val_2 = 1; val_2 <= 9; val_2++)
		{
			_putchar(',');
			_putchar(' ');

			result = val * val_2;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
