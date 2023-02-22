#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int digit_last = n % 10;

	if (digit_last < 0)
		digit_last *= -1;

	_putchar(digit_last + '0');

	return (digit_last);
}
