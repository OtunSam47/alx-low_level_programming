#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the n times table, starting with 0.
 *
 * @n - any chosen integer
*/

void print_times_table(int n)
{
	if ((n < 15) && n >= 0)
	{
		int x, y, result;
		
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
				{
					result = x * y;
					if (result > 99)
						printf("%d", result);
					else if (result > 9)
					{
						_putchar(' ');
						printf("%d", result);
					}
					else
					{
						_putchar(' ');
						printf(" %d", result);
					}
					if (y == n)
						continue;
					else{
						_putchar(',');
						_putchar(' ');
					}
				}
				_putchar('\n');
		}
	}
}
