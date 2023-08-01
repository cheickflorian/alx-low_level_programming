#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint -  Deletes the head node of a listint_t linked list.
 * @head: Double pointer to the head of the the list
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
