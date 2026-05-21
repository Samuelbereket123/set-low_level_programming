#include "main.h"


void print_numbers(void)
{
    char nums[] = "01356789";
    int i;

    for (i = 0; nums[i] != '\0'; i++)
    {
	_putchar(nums[i]);
    } 
    _putchar('\n');
}	

