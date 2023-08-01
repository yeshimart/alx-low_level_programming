#include "lists.h"

/**
 * listint_len - returns  number of elements in a linked lists
 * @h: linked list of all type listint_t to traverse
 *
 * Return: success
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
