#include "lists.h"

/**
 * find_listint_loop - Find a loop in a linked list
 * @head: A pointer to the head of the linked list
 *
 * Return: The address of the node where the loop starts,
 *or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;

if (head == NULL)
return (NULL);

slow = head;
fast = head;

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;      /* Move slow by 1 step */
fast = fast->next->next; /* Move fast by 2 steps */

if (slow == fast)
{
/* Loop detected, reset one pointer and start from the beginning */
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow); /* Both pointers meet at the loop start */
}
}
return (NULL); /* No loop found */
}
