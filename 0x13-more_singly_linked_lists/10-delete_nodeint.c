#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @index: The index of the node to be deleted (starting at 0).
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node, *temp;
unsigned int i = 0;

if (!head || !*head)
return (-1);

current_node = *head;

if (index == 0)
{
*head = current_node->next;
free(current_node);
return (1);
}

while (i < index - 1)
{
if (!current_node)
return (-1);

current_node = current_node->next;
i++;
}

if (!current_node || !(current_node->next))
return (-1);

temp = current_node->next;
current_node->next = temp->next;
free(temp);
return (1);
}
