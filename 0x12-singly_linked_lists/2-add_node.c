#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer tohead of the list_t list.
 * @str: The string tobeadded to list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dupl;
	int leng;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dupl = strdup(str);
	if (dupl == NULL)
	{
		free(new);
		return (NULL);
	}

	for (leng = 0; str[leng];)
		leng++;

	new->str = dupl;
	new->len = leng;
	new->next = *head;

	*head = new;

	return (new);
}
