#include "main.h"

/**
  * _puts_recursion - Writes a string followed by a new line
  * @s: the strings to be printed
  *
  * Return: Nothing.
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
