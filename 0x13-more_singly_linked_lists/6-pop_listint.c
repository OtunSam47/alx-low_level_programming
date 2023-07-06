#include "lists.h"

/**
 * pop_listint - Deletes head node of listint_t list.
 * @head: A pointer to address of
 *        head of listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise, the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
