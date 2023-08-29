#include "lists.h"

/**
 * get_nodeint_at_index - Return the node at an certain index in a link list
 * @head: first node in link list
 * @index: index of the node to return
 *
 * Return: Pointer to node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
