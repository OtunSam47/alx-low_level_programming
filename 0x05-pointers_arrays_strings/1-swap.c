#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: the first integer
 * @b: the second integer
 * 
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int dig;

	dig = *a;
	*a = *b;
	*b = dig;
}
