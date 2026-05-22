#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0-9 but will exclude 2 and 4
 *
 */

void print_most_numbers(void)
{
	char nums[] = "01356789";
	int i;

	for (i = 0; nums[i] != '\0'; i++)
	{
		_putchar(nums[i]);
	}
	_putchar('\n');
}
