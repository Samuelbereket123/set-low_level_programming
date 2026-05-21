#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 */

void print_numbers(void)
{
	char nums[] = "0123456789";
	int i;

	for (i = 0; nums[i] != '\0'; i++)
	{
		_putchar(nums[i]);
	}

	_putchar('\n');
}
