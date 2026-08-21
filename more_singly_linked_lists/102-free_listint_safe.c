#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to the head of the list
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *next;
	listint_t **nodes;
	listint_t **new_nodes;
	size_t count;
	size_t i;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	nodes = NULL;
	count = 0;

	while (current != NULL)
	{
		i = 0;
		while (i < count)
		{
			if (nodes[i] == current)
			{
				free(nodes);
				*h = NULL;
				return (count);
			}
			i++;
		}

		next = current->next;

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

		free(current);
		count++;
		current = next;
	}

	free(nodes);
	*h = NULL;
	return (count);
}
