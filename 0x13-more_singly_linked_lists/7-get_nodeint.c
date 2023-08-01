#include "lists.h"
/**
 * get_nodeint_at_index - returns node at a certain index in a linked list
 * @head: node in the linked list
 * @index: index of node to return
 *
 * Return: pointer to the node we're looking for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
