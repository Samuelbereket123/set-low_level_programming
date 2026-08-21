#include "monty.h"

/**
 * push - adds a node to the stack
 * @stack: pointer to the stack
 * @line_number: line number of the instruction
 *
 * Return: Nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	(void)line_number;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		exit(EXIT_FAILURE);

	new->n = 0;
	new->prev = NULL;
	new->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new;

	*stack = new;
}
