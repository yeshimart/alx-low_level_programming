#include "lists.h"
/**
 * sum_listint - Calculates the sum of all the Data in a listint_t list
 * @head: first node in The linked list
 *
 * Return:sucess
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}

	return (sum);
}
