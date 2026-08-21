#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to the first node
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	i = 0;

	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
