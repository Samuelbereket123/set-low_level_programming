#include "monty.h"

/**
 * main - test pstr
 *
 * Return: Always 0
 */
int main(void)
{
	stack_t *stack = NULL;
	stack_t n1 = {83, NULL, NULL};
	stack_t n2 = {99, NULL, NULL};
	stack_t n3 = {104, NULL, NULL};
	stack_t n4 = {111, NULL, NULL};
	stack_t n5 = {111, NULL, NULL};
	stack_t n6 = {108, NULL, NULL};
	stack_t n7 = {0, NULL, NULL};

	stack = &n1;
	n1.next = &n2;
	n2.prev = &n1;
	n2.next = &n3;
	n3.prev = &n2;
	n3.next = &n4;
	n4.prev = &n3;
	n4.next = &n5;
	n5.prev = &n4;
	n5.next = &n6;
	n6.prev = &n5;
	n6.next = &n7;
	n7.prev = &n6;

	pstr(&stack, 1);

	return (0);
}
