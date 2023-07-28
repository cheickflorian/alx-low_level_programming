#include "lists.h"
/**
 * add_node - This function add a new node
 * @head: head of the linked list
 * @str: string to store the list
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	for (node = 0; str[node]; node++);

	new_node->len = node;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
