#include "main.h"

/**
 * more_functions - prints numbers from 0-14 and only uses 3 _putchar's
 *
 */

void more_numbers(void)
{
	char *nums = "01234567891011121314";
	int i;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		j = 0;

		while (nums[j] != '\0')
		{
			_putchar(nums[j]);
			j++;
		}

		_putchar('\n');
	}
}
