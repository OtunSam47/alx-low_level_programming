#include "lists.h"

/**
 * get_nodeint_at_index - Locates given node of
 *                        listint_t linked list.
 * @head: A pointer to head of listint_t list.
 * @index: The index of node to locate - indices start at 0.
 *
 * Return: If node does not exist - NULL.
 *         Otherwise, the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
