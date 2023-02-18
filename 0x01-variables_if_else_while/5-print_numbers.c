/*
 * File: 5-print_numbers.c
 * Auth: Samuel OTUN
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
		printf("%d", dig);

	printf("\n");

	return (0);
}
