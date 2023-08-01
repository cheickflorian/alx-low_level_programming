#include "lists.h"
/**
 * find_listint_loop - Finds the starting node of a loop
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow, *fast;
    if (head == NULL)
        return (NULL);
    slow = head;
    fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return (slow);
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return (NULL);
}
