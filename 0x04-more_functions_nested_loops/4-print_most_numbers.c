#include "main.h"
/**
* print_most_numbers - checks if input is a digit
* Return: returns 1 if c is digit else 0
*/

void print_most_numbers(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
		if (i != '2' && i != '4')
			_putchar(i);
	_putchar('\n');
}
