#include "main.h"
/**
* more_numbers - checks if input is a digit
* @n: width of column and row of box
* Return: returns 1 if c is digit else 0
*/

void print_square(int n)
{

	int j = 1;
	int i = 1;
	
	while (j <= n)
	{
		for (i = 1; i <= n; i++)
			_putchar('#');
		_putchar('\n');
		j++;
	}
}
