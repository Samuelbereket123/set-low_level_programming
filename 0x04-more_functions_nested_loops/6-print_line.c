#include "main.h"
/**
 * print_line - prints lines based on specific amount of numbers assigned on a variable n and do print empty numbers if the n is less than or equal to 0.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
