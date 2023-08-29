#include "lists.h"

/**
 * pop_listint - Deletes head node of a link list
 * @head: Pointer the first element in link list
 *
 * Return: The data inside a elements was deleted,
 * or 0 if the list are empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
