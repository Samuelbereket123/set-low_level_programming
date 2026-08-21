#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t **nodes;
	size_t count;
	size_t i;

	current = head;
	count = 0;
	nodes = NULL;

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
		count++;

		nodes = realloc(nodes, count * sizeof(*nodes));
		if (nodes == NULL)
			exit(98);

		nodes[count - 1] = current;
		current = current->next;
	}

	free(nodes);
	return (count);
}
