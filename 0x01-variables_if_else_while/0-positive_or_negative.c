/*
 *Author : OTUN Samuel
 *file: 0-positive_or_negative.c
 *
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *main : The variable n will store a different value
 *	 every time you will run this program
 *
 * Return: Always 0
 *
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
