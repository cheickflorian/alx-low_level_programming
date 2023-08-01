#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node of a listint_t linked
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting at 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (current_index == index)
			return (current);
		current_index++;
		current = current->next;
	}
	return (NULL);
}
