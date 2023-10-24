#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Free a linked list, even if it contains a loop
 * @h: A pointer to a pointer to the head of the linked list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *next;
size_t count = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;

while (current != NULL)
{
next = current->next;
free(current);
count++;
current = next;

if (current >= *h)
{
*h = NULL;
break;
}
}

return (count);
}
