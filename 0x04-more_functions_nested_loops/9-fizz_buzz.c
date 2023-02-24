#include "main.h"

/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 *        Fizz is printed instead of the number, for multiples of five,
 *        Buzz, and for multiples of both three and five, FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if ((count % 3) == 0 && (count % 5) == 0)
			printf("FizzBuzz");

		else if ((count % 3) == 0)
			printf("Fizz");

		else if ((count % 5) == 0)
			printf("Buzz");

		else
			printf("%d", count);

		if (count == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
