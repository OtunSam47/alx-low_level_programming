#include <unistd.h>


/**
 * _putchar - prints a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errro is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
