#include "main.h"
/**
* print_line - checks if input is a digit
* @n: number to check
* Return: returns 1 if c is digit else 0
*/

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	_putchar('\n');
}
