#include "lists.h"

/**
 * sum_dlistint - sums all of the data 
 * @head: pointer to the beginning 
 *
 * Return: sum of all data, or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
