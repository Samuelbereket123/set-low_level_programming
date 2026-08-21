#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t **nodes;
	const listint_t **new_nodes;
	size_t count;
	size_t i;

	current = head;
	nodes = NULL;
	count = 0;

	while (current != NULL)
	{
		i = 0;
		while (i < count)
		{
			if (nodes[i] == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				free(nodes);
				return (count);
			}
			i++;
		}

		printf("[%p] %d\n", (void *)current, current->n);

		new_nodes = malloc((count + 1) * sizeof(*new_nodes));
		if (new_nodes == NULL)
		{
			free(nodes);
			exit(98);
		}

		i = 0;
		while (i < count)
		{
			new_nodes[i] = nodes[i];
			i++;
		}

		new_nodes[count] = current;
		free(nodes);
		nodes = new_nodes;
		count++;

		current = current->next;
	}

	free(nodes);
	return (count);
}
