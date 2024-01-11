#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at nth index
 *
 * @head: Head of node
 *
 * @index: index
 *
 * Return: 1 succeed, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (node->next != NULL)
			node->next->prev = NULL;
		free(node);
		return (1);
	}

	count = 0;
	while (count < index - 1 && node != NULL)
	{
		node = node->next;
		count++;
	}

	if (node == NULL || node->next == NULL)
		return (-1);

	if (node->next->next != NULL)
	{
		dlistint_t *temp = node->next;
		node->next = temp->next;
		temp->next->prev = node;
		free(temp);
		return (1);
	}
	else
	{
		free(node->next);
		node->next = NULL;
		return (1);
	}

	return (-1);
}
