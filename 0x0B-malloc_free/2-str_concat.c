#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenates two strings of any size
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int w = 0, x = 0, y = 0, z = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[w])
		w++;

	while (s2[x])
		x++;

	z = w + x;
	s = malloc((sizeof(char) * z) + 1);

	if (s == NULL)
		return (NULL);

	x = 0;

	while (y < z)
	{
		if (y <= w)
			s[y] = s1[y];

		if (y >= w)
		{
			s[y] = s2[x];
			x++;
		}

		y++;
	}

	s[y] = '\0';
	return (s);
}
