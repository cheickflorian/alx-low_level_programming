#include "lists.h"
/**
 * add_node_end - Add a new node at the end of the list.
 * @head: pointer to the head of the list
 * @str: String to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	size_t node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (node = 0; str[node]; node++);

	new_node->len = node;
	new_node->next = NULL;
	last_node = *head;
	if (last_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (new_node);
}
