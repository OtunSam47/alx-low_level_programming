#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a newnode at the end
 *                of a list_t list.
 * @head: A pointer tothe head of list_t list.
 * @str: The string to be added to list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dupl;
	int leng;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dupl = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (leng = 0; str[leng];)
		leng++;

	new->str = dupl;
	new->len = leng;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
