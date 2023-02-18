/*
 * File: 9-print_comb.c
 * Auth: Samuel OTUN
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit digbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int dig;

	for (dig = 0; dig <= 9; dig++)
	{
		putchar((dig % 10) + '0');
		if (dig == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
