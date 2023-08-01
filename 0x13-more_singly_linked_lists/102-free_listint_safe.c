#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list with handling loop cases.
 * @head: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **head)
{
    listint_t *slow, *fast, *temp;
    size_t count = 0;
    slow = *head;
    fast = *head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            printf("Loop detected, freeing the list with a loop\n");
            while (slow->next != *head)
            {
                temp = slow;
                slow = slow->next;
                free(temp);
                count++;
            }
            free(slow);
            *head = NULL;
            count++;
            return (count);
        }
    }
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        count++;
    }
    return (count);
}
