#include "main.h"

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
