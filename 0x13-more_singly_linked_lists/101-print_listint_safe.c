#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Print a linked list, even if it contains a loop
 * @head: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current;
size_t count = 0;

while (head != NULL)
{
current = head;
printf("[%p] %d\n", (void *)head, head->n);
count++;
head = head->next;

if (current <= head)
{
printf("-> [%p] %d\n", (void *)head, head->n);
break;
}
}

return (count);
}
